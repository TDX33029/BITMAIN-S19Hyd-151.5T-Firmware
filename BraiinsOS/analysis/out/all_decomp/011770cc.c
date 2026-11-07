// FUN_011770cc @ 011770cc size=2600 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_011770cc(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

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
  int iVar25;
  uint uVar26;
  bool bVar27;
  uint *puVar28;
  int *piVar29;
  int iVar30;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined4 uVar35;
  uint uVar36;
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
  local_f0 = *(undefined4 *)(param_2 + 8);
  iVar30 = param_1[0x1b];
  uVar36 = param_1[0x1c];
  iVar41 = uVar36 * 100 + iVar30;
  local_f4 = *(int *)(param_2 + 4);
  uVar22 = param_1[0xd];
  iVar23 = param_1[0xf];
  local_dc = *(undefined4 *)(param_2 + 0xc);
  if (local_f4 == 0) {
    local_dc = 0;
  }
  local_fc = (uint)(local_f4 != 0);
  local_e8 = 0;
  local_f8 = 0;
  local_ec = local_fc;
  local_e4 = local_f4;
  local_e0 = local_f0;
  if (param_1[3] != 0) {
    iVar37 = *param_1;
    uVar24 = param_1[1];
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
LAB_01177234:
    do {
      uVar42 = FUN_00f45584(&local_fc);
      uVar40 = (undefined4)((ulonglong)uVar42 >> 0x20);
      iVar38 = (int)uVar42;
      if (iVar38 == 0) {
        return 0;
      }
      uVar31 = *(undefined4 *)(iVar38 + 4);
      iVar25 = *(int *)(iVar38 + 8);
      local_a8 = iVar10;
      local_a4 = iVar11;
      local_98 = uVar8;
      uStack_94 = uVar9;
      local_90._0_4_ = uVar6;
      local_90._4_4_ = uVar7;
      FUN_011df94c(&local_a8,uVar31,iVar25);
      uVar18 = local_98 ^ 0xff;
      uVar20 = uStack_94 << 0x18 | (uStack_94 >> 8 & 0xff) << 0x10 | (uStack_94 >> 0x10 & 0xff) << 8
               | uStack_94 >> 0x18;
      lVar2 = (ulonglong)uVar20 * 0xb36a80d2;
      uVar32 = (uint)lVar2;
      uVar26 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
               uVar32 >> 0x18) ^
               uStack_94 * 0x2df45158 +
               uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20);
      uVar33 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
               uVar26 >> 0x18;
      lVar3 = (ulonglong)~(uint)local_90 * (ulonglong)uVar33;
      uVar39 = (uint)lVar3;
      uVar20 = (uVar18 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 | (local_98 >> 0x10 & 0xff) << 8 |
               local_98 >> 0x18) * -0x4c957f2e +
               uVar20 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar34 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
               (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
      uVar32 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^ (uint)((ulonglong)uVar18 * 0x2df45158);
      uVar18 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
               uVar32 >> 0x18) * ~(uint)local_90 +
               uVar33 * ~local_90._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
      lVar2 = (ulonglong)uVar34 * (ulonglong)uVar32;
      uVar18 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
               uVar18 >> 0x18) ^ (uint)lVar2;
      uVar26 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
               uVar39 >> 0x18) ^
               uVar26 * uVar34 +
               uVar32 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                         ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
               (int)((ulonglong)lVar2 >> 0x20);
      uVar20 = uVar26;
      if ((uVar32 & 0x20) != 0) {
        uVar20 = uVar18;
        uVar18 = uVar26;
      }
      uVar20 = uVar18 << (uVar32 & 0x1f) | (uVar20 >> 1) >> (~uVar32 & 0x1f);
      uVar18 = uVar20 >> 0x19;
      local_168 = 0;
      while( true ) {
        uVar20 = uVar24 & uVar20;
        uVar26 = *(uint *)(iVar37 + uVar20);
        uVar32 = uVar26 ^ uVar18 * 0x1010101;
        uVar32 = ~uVar32 & 0x80808080 & uVar32 + 0xfefefeff;
        while (uVar32 != 0) {
          uVar33 = uVar32 - 1 & uVar32;
          uVar34 = uVar20 + ((uint)LZCOUNT(uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                                           (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18) >> 3) &
                   uVar24;
          iVar21 = iVar37 + -0x20 + uVar34 * -0x20;
          uVar32 = uVar33;
          if (iVar25 == *(int *)(iVar21 + 8)) {
            uVar35 = *(undefined4 *)(iVar21 + 4);
            iVar21 = thunk_FUN_016dd50a(uVar31,uVar35,iVar25);
            if (iVar21 == 0) {
              local_c8 = -0x80000000;
              local_c4 = uVar35;
              local_c0 = iVar25;
              local_bc = param_3;
              iVar25 = FUN_011d018c(iVar37 + -0x14 + uVar34 * -0x20,uVar40,&local_c8,param_4,param_5
                                   );
              if (iVar25 != 0) {
                return iVar25;
              }
              if (iVar23 == 0) goto LAB_01177234;
              uVar31 = *(undefined4 *)(iVar38 + 4);
              iVar38 = *(int *)(iVar38 + 8);
              local_a8 = iVar16;
              local_a4 = iVar17;
              local_98 = uVar14;
              uStack_94 = uVar15;
              local_90._0_4_ = uVar12;
              local_90._4_4_ = uVar13;
              FUN_011df94c(&local_a8,uVar31,iVar38);
              uVar18 = local_98 ^ 0xff;
              uVar20 = uStack_94 << 0x18 | (uStack_94 >> 8 & 0xff) << 0x10 |
                       (uStack_94 >> 0x10 & 0xff) << 8 | uStack_94 >> 0x18;
              lVar2 = (ulonglong)uVar20 * 0xb36a80d2;
              uVar32 = (uint)lVar2;
              uVar26 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8
                       | uVar32 >> 0x18) ^
                       uStack_94 * 0x2df45158 +
                       uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20);
              uVar33 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8
                       | uVar26 >> 0x18;
              lVar3 = (ulonglong)~(uint)local_90 * (ulonglong)uVar33;
              uVar34 = (uint)lVar3;
              uVar20 = (uVar18 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 |
                        (local_98 >> 0x10 & 0xff) << 8 | local_98 >> 0x18) * -0x4c957f2e +
                       uVar20 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
              uVar32 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 |
                        (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) ^
                       (uint)((ulonglong)uVar18 * 0x2df45158);
              uVar18 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8
                       | uVar32 >> 0x18) * ~(uint)local_90 +
                       uVar33 * ~local_90._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
              uVar20 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
                       (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
              lVar2 = (ulonglong)uVar20 * (ulonglong)uVar32;
              uVar18 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 |
                        (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) ^ (uint)lVar2;
              uVar26 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8
                       | uVar34 >> 0x18) ^
                       uVar26 * uVar20 +
                       uVar32 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                                 ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
                       (int)((ulonglong)lVar2 >> 0x20);
              uVar20 = uVar26;
              if ((uVar32 & 0x20) != 0) {
                uVar20 = uVar18;
                uVar18 = uVar26;
              }
              uVar20 = uVar18 << (uVar32 & 0x1f) | (uVar20 >> 1) >> (~uVar32 & 0x1f);
              iVar25 = 0;
              uVar18 = uVar20 >> 0x19;
              goto LAB_011775f8;
            }
          }
        }
        if ((uVar26 & 0x80808080 & uVar26 << 1) != 0) break;
        local_168 = local_168 + 4;
        uVar20 = uVar20 + local_168;
      }
      local_d8 = 0x80000000;
      local_d4 = uVar31;
      local_d0 = iVar25;
      local_cc = param_3;
      if (uVar36 == 0) goto LAB_011778c4;
      bVar27 = false;
      iVar25 = iVar30;
      do {
        while( true ) {
          cVar4 = FUN_01164a60(iVar25,*(undefined4 *)(iVar38 + 4),*(undefined4 *)(iVar38 + 8));
          iVar21 = iVar25 + 100;
          if (cVar4 != '\0') break;
          iVar25 = iVar21;
          if (iVar21 == iVar41) {
            if (!bVar27) goto LAB_011778c4;
            goto LAB_01177234;
          }
        }
        iVar25 = FUN_011d018c(iVar25 + 0x50,uVar40,&local_d8,param_4,param_5);
        if (iVar25 != 0) {
          return iVar25;
        }
        bVar27 = true;
        iVar25 = iVar21;
      } while (iVar21 != iVar41);
    } while( true );
  }
  if (uVar36 != 0) {
LAB_011777f4:
    do {
      uVar42 = FUN_00f45584(&local_fc);
      iVar38 = (int)uVar42;
      if (iVar38 == 0) {
        return 0;
      }
      local_d4 = *(undefined4 *)(iVar38 + 4);
      local_d0 = *(int *)(iVar38 + 8);
      bVar27 = false;
      local_d8 = 0x80000000;
      iVar23 = iVar30;
      local_cc = param_3;
      do {
        while( true ) {
          cVar4 = FUN_01164a60(iVar23,*(undefined4 *)(iVar38 + 4),*(undefined4 *)(iVar38 + 8));
          iVar5 = iVar23 + 100;
          if (cVar4 != '\0') break;
          iVar23 = iVar5;
          if (iVar5 == iVar41) {
            if (!bVar27) goto LAB_011778c4;
            goto LAB_011777f4;
          }
        }
        iVar23 = FUN_011d018c(iVar23 + 0x50,(int)((ulonglong)uVar42 >> 0x20),&local_d8,param_4,
                              param_5);
        if (iVar23 != 0) {
          return iVar23;
        }
        bVar27 = true;
        iVar23 = iVar5;
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
LAB_011778c4:
  piVar29 = (int *)param_1[0x18];
  do {
    iVar23 = *piVar29;
    bVar27 = (bool)hasExclusiveAccess(piVar29);
  } while (!bVar27);
  *piVar29 = iVar23 + 1;
  if (iVar23 < 0) {
LAB_01177af8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1177af8);
    (*pcVar1)();
  }
  iVar23 = param_1[0x19];
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
      iVar30 = *piVar19;
      bVar27 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar27);
    *piVar19 = iVar30 + 1;
    if (iVar30 < 0) goto LAB_01177af8;
    uVar22 = 0;
    iVar30 = param_1[0x18];
    uVar40 = *(undefined4 *)(param_4 + 0xc);
    uVar31 = *(undefined4 *)(param_4 + 0x10);
    uVar36 = param_1[0x19];
    uVar6 = (*(int **)(param_4 + 4))[1];
    if (uVar6 <= uVar36) {
      iVar41 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar30 + 8,uVar6);
      uVar22 = uVar6;
      if (iVar41 != 0) {
        uVar22 = 0;
      }
    }
    local_b0 = FUN_011e1508(iVar30 + 8 + uVar22,uVar36 - uVar22);
    local_bc = 3;
    local_c8 = 2;
    local_b8 = uVar40;
    local_b4 = uVar31;
  }
  uVar42 = FUN_01238114(param_3);
  piVar19 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  uVar40 = *(undefined4 *)(iVar38 + 4);
  iVar41 = *(int *)(iVar38 + 8);
  iVar30 = 1;
  if (iVar41 != 0) {
    iVar30 = thunk_FUN_016d4a50(iVar41);
    if (iVar30 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar41);
    }
  }
  FUN_016dd1aa(iVar30,uVar40,iVar41);
  local_50 = 6;
  local_88 = &DAT_8000000b;
  *piVar19 = iVar41;
  piVar19[1] = iVar30;
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
  local_30 = piVar29;
  local_2c = iVar23;
  local_38 = uVar42;
  local_90 = local_b0;
  iVar23 = thunk_FUN_016d4a50(0x80);
  if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar23,&local_a8,0x80);
  return iVar23;
LAB_011775f8:
  uVar20 = uVar22 & uVar20;
  uVar26 = *(uint *)(iVar5 + uVar20);
  uVar32 = uVar26 ^ uVar18 * 0x1010101;
  uVar32 = ~uVar32 & 0x80808080 & uVar32 + 0xfefefeff;
  while( true ) {
    if (uVar32 == 0) goto LAB_01177690;
    uVar33 = uVar20 + ((uint)LZCOUNT(uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                                     (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18) >> 3) & uVar22;
    iVar21 = iVar5 + -0x14 + uVar33 * -0x14;
    if ((iVar38 == *(int *)(iVar21 + 8)) &&
       (iVar21 = thunk_FUN_016dd50a(uVar31,*(undefined4 *)(iVar21 + 4),iVar38), iVar21 == 0)) break;
    uVar32 = uVar32 - 1 & uVar32;
  }
  iVar38 = iVar5 + uVar33 * -0x14;
  puVar28 = *(uint **)(iVar38 + -8);
  iVar38 = *(int *)(iVar38 + -4) << 2;
  while (iVar38 != 0) {
    uVar18 = *puVar28;
    if (uVar36 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,uVar36,&DAT_018890f0);
    }
    iVar25 = FUN_011d018c(uVar18 * 100 + iVar30 + 0x50,uVar40,&local_c8,param_4,param_5);
    iVar38 = iVar38 + -4;
    puVar28 = puVar28 + 1;
    if (iVar25 != 0) {
      return iVar25;
    }
  }
  goto LAB_01177234;
LAB_01177690:
  if ((uVar26 & 0x80808080 & uVar26 << 1) != 0) goto LAB_01177234;
  iVar25 = iVar25 + 4;
  uVar20 = uVar20 + iVar25;
  goto LAB_011775f8;
}

