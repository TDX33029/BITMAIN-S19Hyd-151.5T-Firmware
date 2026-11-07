// FUN_01170798 @ 01170798 size=2604 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01170798(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  bool bVar25;
  uint *puVar26;
  int *piVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined4 uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  undefined4 uVar40;
  int iVar41;
  undefined8 uVar42;
  int local_168;
  uint local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  undefined1 *local_88;
  undefined4 local_84;
  int *local_80;
  undefined4 local_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  int local_2c;
  
  if (*param_2 != '\x05') {
    return 0;
  }
  uVar34 = param_1[0xd];
  uVar28 = param_1[0x1c];
  iVar35 = param_1[0xf];
  local_f0 = *(undefined4 *)(param_2 + 8);
  local_f4 = *(int *)(param_2 + 4);
  local_e8 = 0;
  local_f8 = 0;
  iVar36 = param_1[0x1b];
  local_dc = *(undefined4 *)(param_2 + 0xc);
  iVar41 = iVar36 + uVar28 * 0x28;
  if (local_f4 == 0) {
    local_dc = 0;
  }
  local_fc = (uint)(local_f4 != 0);
  local_ec = local_fc;
  local_e4 = local_f4;
  local_e0 = local_f0;
  if (param_1[3] != 0) {
    iVar37 = *param_1;
    uVar22 = param_1[1];
    iVar5 = param_1[0xc];
    uVar6 = param_1[4];
    uVar7 = param_1[5];
    uVar8 = param_1[6];
    uVar9 = param_1[7];
    iVar10 = param_1[8];
    iVar11 = param_1[9];
    uVar12 = param_1[0x10];
    uVar13 = param_1[0x11];
    uVar14 = param_1[0x12];
    uVar15 = param_1[0x13];
    iVar16 = param_1[0x14];
    iVar17 = param_1[0x15];
LAB_01170904:
    do {
      uVar42 = FUN_00f45584(&local_fc);
      uVar40 = (undefined4)((ulonglong)uVar42 >> 0x20);
      iVar38 = (int)uVar42;
      if (iVar38 == 0) {
        return 0;
      }
      uVar29 = *(undefined4 *)(iVar38 + 4);
      iVar23 = *(int *)(iVar38 + 8);
      local_a8 = iVar10;
      local_a4 = iVar11;
      local_98 = uVar8;
      uStack_94 = uVar9;
      local_90._0_4_ = uVar6;
      local_90._4_4_ = uVar7;
      FUN_011df94c(&local_a8,uVar29,iVar23);
      uVar18 = local_98 ^ 0xff;
      uVar20 = uStack_94 << 0x18 | (uStack_94 >> 8 & 0xff) << 0x10 | (uStack_94 >> 0x10 & 0xff) << 8
               | uStack_94 >> 0x18;
      lVar2 = (ulonglong)uVar20 * 0xb36a80d2;
      uVar30 = (uint)lVar2;
      uVar24 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
               uVar30 >> 0x18) ^
               uStack_94 * 0x2df45158 +
               uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20);
      uVar31 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
               uVar24 >> 0x18;
      lVar3 = (ulonglong)~(uint)local_90 * (ulonglong)uVar31;
      uVar39 = (uint)lVar3;
      uVar20 = (uVar18 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 | (local_98 >> 0x10 & 0xff) << 8 |
               local_98 >> 0x18) * -0x4c957f2e +
               uVar20 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar32 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
               (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
      uVar30 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^ (uint)((ulonglong)uVar18 * 0x2df45158);
      uVar18 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
               uVar30 >> 0x18) * ~(uint)local_90 +
               uVar31 * ~local_90._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
      lVar2 = (ulonglong)uVar32 * (ulonglong)uVar30;
      uVar18 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
               uVar18 >> 0x18) ^ (uint)lVar2;
      uVar24 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
               uVar39 >> 0x18) ^
               uVar24 * uVar32 +
               uVar30 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                         ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
               (int)((ulonglong)lVar2 >> 0x20);
      uVar20 = uVar24;
      if ((uVar30 & 0x20) != 0) {
        uVar20 = uVar18;
        uVar18 = uVar24;
      }
      uVar20 = uVar18 << (uVar30 & 0x1f) | (uVar20 >> 1) >> (~uVar30 & 0x1f);
      uVar18 = uVar20 >> 0x19;
      local_168 = 0;
      while( true ) {
        uVar20 = uVar22 & uVar20;
        uVar24 = *(uint *)(iVar37 + uVar20);
        uVar30 = uVar24 ^ uVar18 * 0x1010101;
        uVar30 = ~uVar30 & 0x80808080 & uVar30 + 0xfefefeff;
        while (uVar30 != 0) {
          uVar31 = uVar30 - 1 & uVar30;
          uVar32 = uVar20 + ((uint)LZCOUNT(uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 |
                                           (uVar30 >> 0x10 & 0xff) << 8 | uVar30 >> 0x18) >> 3) &
                   uVar22;
          iVar21 = iVar37 + -0x20 + uVar32 * -0x20;
          uVar30 = uVar31;
          if (iVar23 == *(int *)(iVar21 + 8)) {
            uVar33 = *(undefined4 *)(iVar21 + 4);
            iVar21 = thunk_FUN_016dd50a(uVar29,uVar33,iVar23);
            if (iVar21 == 0) {
              local_c8 = -0x80000000;
              local_c4 = uVar33;
              local_c0 = iVar23;
              local_bc = param_3;
              iVar23 = FUN_011d018c(iVar37 + -0x14 + uVar32 * -0x20,uVar40,&local_c8,param_4,param_5
                                   );
              if (iVar23 != 0) {
                return iVar23;
              }
              if (iVar35 == 0) goto LAB_01170904;
              uVar29 = *(undefined4 *)(iVar38 + 4);
              iVar38 = *(int *)(iVar38 + 8);
              local_a8 = iVar16;
              local_a4 = iVar17;
              local_98 = uVar14;
              uStack_94 = uVar15;
              local_90._0_4_ = uVar12;
              local_90._4_4_ = uVar13;
              FUN_011df94c(&local_a8,uVar29,iVar38);
              uVar18 = local_98 ^ 0xff;
              uVar20 = uStack_94 << 0x18 | (uStack_94 >> 8 & 0xff) << 0x10 |
                       (uStack_94 >> 0x10 & 0xff) << 8 | uStack_94 >> 0x18;
              lVar2 = (ulonglong)uVar20 * 0xb36a80d2;
              uVar30 = (uint)lVar2;
              uVar24 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8
                       | uVar30 >> 0x18) ^
                       uStack_94 * 0x2df45158 +
                       uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20);
              uVar31 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8
                       | uVar24 >> 0x18;
              lVar3 = (ulonglong)~(uint)local_90 * (ulonglong)uVar31;
              uVar32 = (uint)lVar3;
              uVar20 = (uVar18 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 |
                        (local_98 >> 0x10 & 0xff) << 8 | local_98 >> 0x18) * -0x4c957f2e +
                       uVar20 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
              uVar30 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 |
                        (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) ^
                       (uint)((ulonglong)uVar18 * 0x2df45158);
              uVar18 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8
                       | uVar30 >> 0x18) * ~(uint)local_90 +
                       uVar31 * ~local_90._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
              uVar20 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
                       (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
              lVar2 = (ulonglong)uVar20 * (ulonglong)uVar30;
              uVar18 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 |
                        (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) ^ (uint)lVar2;
              uVar24 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8
                       | uVar32 >> 0x18) ^
                       uVar24 * uVar20 +
                       uVar30 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                                 ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
                       (int)((ulonglong)lVar2 >> 0x20);
              uVar20 = uVar24;
              if ((uVar30 & 0x20) != 0) {
                uVar20 = uVar18;
                uVar18 = uVar24;
              }
              uVar20 = uVar18 << (uVar30 & 0x1f) | (uVar20 >> 1) >> (~uVar30 & 0x1f);
              iVar23 = 0;
              uVar18 = uVar20 >> 0x19;
              goto LAB_01170cc8;
            }
          }
        }
        if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) break;
        local_168 = local_168 + 4;
        uVar20 = uVar20 + local_168;
      }
      local_d8 = 0x80000000;
      local_d4 = uVar29;
      local_d0 = iVar23;
      local_cc = param_3;
      if (uVar28 == 0) goto LAB_01170f94;
      bVar25 = false;
      iVar23 = iVar36;
      do {
        while( true ) {
          cVar4 = FUN_0116bd94(iVar23,*(undefined4 *)(iVar38 + 4),*(undefined4 *)(iVar38 + 8));
          iVar21 = iVar23 + 0x28;
          if (cVar4 != '\0') break;
          iVar23 = iVar21;
          if (iVar21 == iVar41) {
            if (!bVar25) goto LAB_01170f94;
            goto LAB_01170904;
          }
        }
        iVar23 = FUN_011d018c(iVar23 + 0x14,uVar40,&local_d8,param_4,param_5);
        if (iVar23 != 0) {
          return iVar23;
        }
        bVar25 = true;
        iVar23 = iVar21;
      } while (iVar21 != iVar41);
    } while( true );
  }
  if (uVar28 != 0) {
LAB_01170ec4:
    do {
      uVar42 = FUN_00f45584(&local_fc);
      iVar38 = (int)uVar42;
      if (iVar38 == 0) {
        return 0;
      }
      local_d4 = *(undefined4 *)(iVar38 + 4);
      local_d0 = *(int *)(iVar38 + 8);
      bVar25 = false;
      local_d8 = 0x80000000;
      iVar35 = iVar36;
      local_cc = param_3;
      do {
        while( true ) {
          cVar4 = FUN_0116bd94(iVar35,*(undefined4 *)(iVar38 + 4),*(undefined4 *)(iVar38 + 8));
          iVar5 = iVar35 + 0x28;
          if (cVar4 != '\0') break;
          iVar35 = iVar5;
          if (iVar5 == iVar41) {
            if (!bVar25) goto LAB_01170f94;
            goto LAB_01170ec4;
          }
        }
        iVar35 = FUN_011d018c(iVar35 + 0x14,(int)((ulonglong)uVar42 >> 0x20),&local_d8,param_4,
                              param_5);
        if (iVar35 != 0) {
          return iVar35;
        }
        bVar25 = true;
        iVar35 = iVar5;
      } while (iVar5 != iVar41);
    } while( true );
  }
  iVar38 = FUN_00f45584(&local_fc);
  if (iVar38 == 0) {
    return 0;
  }
  local_d4 = *(undefined4 *)(iVar38 + 4);
  local_d0 = *(int *)(iVar38 + 8);
  local_d8 = 0x80000000;
  local_cc = param_3;
LAB_01170f94:
  piVar27 = (int *)param_1[0x18];
  do {
    iVar35 = *piVar27;
    bVar25 = (bool)hasExclusiveAccess(piVar27);
  } while (!bVar25);
  *piVar27 = iVar35 + 1;
  if (iVar35 < 0) {
LAB_011711c8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11711c8);
    (*pcVar1)();
  }
  iVar35 = param_1[0x19];
  if (param_4 == 0) {
    local_c8 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar19 = *(int **)(param_4 + 0xc);
    do {
      iVar36 = *piVar19;
      bVar25 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar25);
    *piVar19 = iVar36 + 1;
    if (iVar36 < 0) goto LAB_011711c8;
    uVar28 = 0;
    iVar36 = param_1[0x18];
    uVar40 = *(undefined4 *)(param_4 + 0xc);
    uVar29 = *(undefined4 *)(param_4 + 0x10);
    uVar34 = param_1[0x19];
    uVar6 = (*(int **)(param_4 + 4))[1];
    if (uVar6 <= uVar34) {
      iVar41 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar36 + 8,uVar6);
      uVar28 = uVar6;
      if (iVar41 != 0) {
        uVar28 = 0;
      }
    }
    local_b0 = FUN_011e1508(iVar36 + 8 + uVar28,uVar34 - uVar28);
    local_bc = 3;
    local_c8 = 2;
    local_b8 = uVar40;
    local_b4 = uVar29;
  }
  uVar42 = FUN_01238114(param_3);
  piVar19 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  uVar40 = *(undefined4 *)(iVar38 + 4);
  iVar41 = *(int *)(iVar38 + 8);
  iVar36 = 1;
  if (iVar41 != 0) {
    iVar36 = thunk_FUN_016d4a50(iVar41);
    if (iVar36 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar41);
    }
  }
  FUN_016dd1aa(iVar36,uVar40,iVar41);
  local_50 = 6;
  local_88 = &DAT_8000000b;
  *piVar19 = iVar41;
  piVar19[1] = iVar36;
  piVar19[2] = iVar41;
  local_7c = 1;
  local_84 = 1;
  local_a8 = local_c8;
  local_a4 = local_c4;
  local_a0 = local_c0;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_80 = piVar19;
  local_4c = param_2;
  local_30 = piVar27;
  local_2c = iVar35;
  local_38 = uVar42;
  local_90 = local_b0;
  iVar35 = thunk_FUN_016d4a50(0x80);
  if (iVar35 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar35,&local_a8,0x80);
  return iVar35;
LAB_01170cc8:
  uVar20 = uVar34 & uVar20;
  uVar24 = *(uint *)(iVar5 + uVar20);
  uVar30 = uVar24 ^ uVar18 * 0x1010101;
  uVar30 = ~uVar30 & 0x80808080 & uVar30 + 0xfefefeff;
  while( true ) {
    if (uVar30 == 0) goto LAB_01170d60;
    uVar31 = uVar20 + ((uint)LZCOUNT(uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 |
                                     (uVar30 >> 0x10 & 0xff) << 8 | uVar30 >> 0x18) >> 3) & uVar34;
    iVar21 = iVar5 + -0x14 + uVar31 * -0x14;
    if ((iVar38 == *(int *)(iVar21 + 8)) &&
       (iVar21 = thunk_FUN_016dd50a(uVar29,*(undefined4 *)(iVar21 + 4),iVar38), iVar21 == 0)) break;
    uVar30 = uVar30 - 1 & uVar30;
  }
  iVar38 = iVar5 + uVar31 * -0x14;
  puVar26 = *(uint **)(iVar38 + -8);
  iVar38 = *(int *)(iVar38 + -4) << 2;
  while (iVar38 != 0) {
    uVar18 = *puVar26;
    if (uVar28 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,uVar28,&DAT_018890f0);
    }
    iVar23 = FUN_011d018c(iVar36 + uVar18 * 0x28 + 0x14,uVar40,&local_c8,param_4,param_5);
    iVar38 = iVar38 + -4;
    puVar26 = puVar26 + 1;
    if (iVar23 != 0) {
      return iVar23;
    }
  }
  goto LAB_01170904;
LAB_01170d60:
  if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) goto LAB_01170904;
  iVar23 = iVar23 + 4;
  uVar20 = uVar20 + iVar23;
  goto LAB_01170cc8;
}

