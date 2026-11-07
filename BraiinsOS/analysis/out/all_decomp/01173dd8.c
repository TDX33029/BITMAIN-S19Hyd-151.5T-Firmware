// FUN_01173dd8 @ 01173dd8 size=2044 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01173dd8(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

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
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint *puVar25;
  int iVar26;
  bool bVar27;
  uint uVar28;
  int *piVar29;
  int iVar30;
  uint uVar31;
  undefined4 uVar32;
  int iVar33;
  uint uVar34;
  undefined4 uVar35;
  int iVar36;
  uint uVar37;
  undefined8 uVar38;
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
  local_f4 = *(int *)(param_2 + 4);
  local_f0 = *(undefined4 *)(param_2 + 8);
  local_dc = *(undefined4 *)(param_2 + 0xc);
  uVar34 = param_1[0x13];
  if (local_f4 == 0) {
    local_dc = 0;
  }
  local_fc = (uint)(local_f4 != 0);
  iVar18 = param_1[0x12];
  local_e8 = 0;
  iVar33 = iVar18 + uVar34 * 0x28;
  iVar5 = param_1[0x10];
  local_f8 = 0;
  local_ec = local_fc;
  local_e4 = local_f4;
  local_e0 = local_f0;
  if (iVar5 != 0) {
    iVar30 = *param_1;
    uVar6 = param_1[4];
    uVar7 = param_1[5];
    uVar8 = param_1[6];
    uVar9 = param_1[7];
    iVar10 = param_1[8];
    iVar11 = param_1[9];
    uVar19 = param_1[1];
    iVar20 = param_1[3];
    iVar21 = param_1[0xf];
LAB_01173efc:
    do {
      uVar38 = FUN_00f45584(&local_fc);
      uVar32 = (undefined4)((ulonglong)uVar38 >> 0x20);
      iVar26 = (int)uVar38;
      if (iVar26 == 0) {
        return 0;
      }
      uVar35 = *(undefined4 *)(iVar26 + 4);
      iVar36 = *(int *)(iVar26 + 8);
      iVar13 = iVar5 << 5;
      iVar15 = iVar21;
      do {
        if (*(int *)(iVar15 + 8) == iVar36) {
          uVar24 = *(undefined4 *)(iVar15 + 4);
          iVar12 = thunk_FUN_016dd50a(uVar24,uVar35,iVar36);
          if (iVar12 == 0) {
            local_c8 = -0x80000000;
            local_c4 = uVar24;
            local_c0 = iVar36;
            local_bc = param_3;
            iVar13 = FUN_011d018c(iVar15 + 0xc,uVar32,&local_c8,param_4,param_5);
            if (iVar13 != 0) {
              return iVar13;
            }
            if (iVar20 == 0) goto LAB_01173efc;
            uVar35 = *(undefined4 *)(iVar26 + 4);
            iVar13 = *(int *)(iVar26 + 8);
            local_a8 = iVar10;
            local_a4 = iVar11;
            local_98 = uVar8;
            uStack_94 = uVar9;
            local_90._0_4_ = uVar6;
            local_90._4_4_ = uVar7;
            FUN_011df94c(&local_a8,uVar35,iVar13);
            uVar14 = local_98 ^ 0xff;
            uVar28 = uStack_94 << 0x18 | (uStack_94 >> 8 & 0xff) << 0x10 |
                     (uStack_94 >> 0x10 & 0xff) << 8 | uStack_94 >> 0x18;
            lVar2 = (ulonglong)uVar28 * 0xb36a80d2;
            uVar22 = (uint)lVar2;
            uVar17 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                     uVar22 >> 0x18) ^
                     uStack_94 * 0x2df45158 +
                     uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20);
            uVar31 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                     uVar17 >> 0x18;
            uVar23 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
                     (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
            lVar3 = (ulonglong)~(uint)local_90 * (ulonglong)uVar31;
            uVar37 = (uint)lVar3;
            uVar22 = (uVar14 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 |
                      (local_98 >> 0x10 & 0xff) << 8 | local_98 >> 0x18) * -0x4c957f2e +
                     uVar28 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
            uVar28 = (uVar22 * 0x1000000 | (uVar22 >> 8 & 0xff) << 0x10 |
                      (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) ^
                     (uint)((ulonglong)uVar14 * 0x2df45158);
            uVar14 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                     uVar28 >> 0x18) * ~(uint)local_90 +
                     uVar31 * ~local_90._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
            lVar2 = (ulonglong)uVar23 * (ulonglong)uVar28;
            iVar26 = 0;
            uVar14 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 |
                      (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) ^ (uint)lVar2;
            uVar17 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
                     uVar37 >> 0x18) ^
                     uVar17 * uVar23 +
                     uVar28 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                               ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
                     (int)((ulonglong)lVar2 >> 0x20);
            uVar22 = uVar17;
            if ((uVar28 & 0x20) != 0) {
              uVar22 = uVar14;
              uVar14 = uVar17;
            }
            uVar22 = uVar14 << (uVar28 & 0x1f) | (uVar22 >> 1) >> (~uVar28 & 0x1f);
            uVar14 = uVar22 >> 0x19;
            goto LAB_011740ec;
          }
        }
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + -0x20;
      } while (iVar13 != 0);
      local_d8 = 0x80000000;
      local_d4 = uVar35;
      local_d0 = iVar36;
      local_cc = param_3;
      if (uVar34 == 0) goto LAB_011743bc;
      bVar27 = false;
      iVar13 = iVar18;
      do {
        while( true ) {
          cVar4 = FUN_0116bd94(iVar13,*(undefined4 *)(iVar26 + 4),*(undefined4 *)(iVar26 + 8));
          iVar15 = iVar13 + 0x28;
          if (cVar4 != '\0') break;
          iVar13 = iVar15;
          if (iVar15 == iVar33) {
            if (!bVar27) goto LAB_011743bc;
            goto LAB_01173efc;
          }
        }
        iVar13 = FUN_011d018c(iVar13 + 0x14,uVar32,&local_d8,param_4,param_5);
        if (iVar13 != 0) {
          return iVar13;
        }
        bVar27 = true;
        iVar13 = iVar15;
      } while (iVar15 != iVar33);
    } while( true );
  }
  if (uVar34 != 0) {
LAB_011742dc:
    do {
      uVar38 = FUN_00f45584(&local_fc);
      iVar26 = (int)uVar38;
      if (iVar26 == 0) {
        return 0;
      }
      local_d4 = *(undefined4 *)(iVar26 + 4);
      local_d0 = *(int *)(iVar26 + 8);
      bVar27 = false;
      local_d8 = 0x80000000;
      iVar5 = iVar18;
      local_cc = param_3;
      do {
        while( true ) {
          cVar4 = FUN_0116bd94(iVar5,*(undefined4 *)(iVar26 + 4),*(undefined4 *)(iVar26 + 8));
          iVar10 = iVar5 + 0x28;
          if (cVar4 != '\0') break;
          iVar5 = iVar10;
          if (iVar10 == iVar33) {
            if (!bVar27) goto LAB_011743bc;
            goto LAB_011742dc;
          }
        }
        iVar5 = FUN_011d018c(iVar5 + 0x14,(int)((ulonglong)uVar38 >> 0x20),&local_d8,param_4,param_5
                            );
        if (iVar5 != 0) {
          return iVar5;
        }
        bVar27 = true;
        iVar5 = iVar10;
      } while (iVar10 != iVar33);
    } while( true );
  }
  iVar26 = FUN_00f45584(&local_fc);
  if (iVar26 == 0) {
    return 0;
  }
  local_d4 = *(undefined4 *)(iVar26 + 4);
  local_d0 = *(int *)(iVar26 + 8);
  local_d8 = 0x80000000;
  local_cc = param_3;
LAB_011743bc:
  piVar29 = (int *)param_1[0xc];
  do {
    iVar5 = *piVar29;
    bVar27 = (bool)hasExclusiveAccess(piVar29);
  } while (!bVar27);
  *piVar29 = iVar5 + 1;
  if (iVar5 < 0) {
LAB_011745d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11745d8);
    (*pcVar1)();
  }
  iVar5 = param_1[0xd];
  if (param_4 == 0) {
    local_c8 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar16 = *(int **)(param_4 + 0xc);
    do {
      iVar18 = *piVar16;
      bVar27 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar27);
    *piVar16 = iVar18 + 1;
    if (iVar18 < 0) goto LAB_011745d8;
    uVar34 = 0;
    iVar18 = param_1[0xc];
    uVar7 = param_1[0xd];
    uVar32 = *(undefined4 *)(param_4 + 0xc);
    uVar35 = *(undefined4 *)(param_4 + 0x10);
    uVar6 = (*(int **)(param_4 + 4))[1];
    if (uVar6 <= uVar7) {
      iVar33 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar18 + 8,uVar6);
      uVar34 = uVar6;
      if (iVar33 != 0) {
        uVar34 = 0;
      }
    }
    local_b0 = FUN_011e1508(iVar18 + 8 + uVar34,uVar7 - uVar34);
    local_bc = 3;
    local_c8 = 2;
    local_b8 = uVar32;
    local_b4 = uVar35;
  }
  uVar38 = FUN_01238114(param_3);
  piVar16 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  uVar32 = *(undefined4 *)(iVar26 + 4);
  iVar33 = *(int *)(iVar26 + 8);
  iVar18 = 1;
  if (iVar33 != 0) {
    iVar18 = thunk_FUN_016d4a50(iVar33);
    if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar33);
    }
  }
  FUN_016dd1aa(iVar18,uVar32,iVar33);
  local_50 = 6;
  local_88 = &DAT_8000000b;
  *piVar16 = iVar33;
  piVar16[1] = iVar18;
  piVar16[2] = iVar33;
  local_7c = 1;
  local_84 = 1;
  local_a8 = local_c8;
  local_a4 = local_c4;
  local_a0 = local_c0;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_80 = piVar16;
  local_4c = param_2;
  local_30 = piVar29;
  local_2c = iVar5;
  local_38 = uVar38;
  local_90 = local_b0;
  iVar5 = thunk_FUN_016d4a50(0x80);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar5,&local_a8,0x80);
  return iVar5;
LAB_011740ec:
  uVar22 = uVar19 & uVar22;
  uVar17 = *(uint *)(iVar30 + uVar22);
  uVar28 = uVar17 ^ uVar14 * 0x1010101;
  uVar28 = ~uVar28 & 0x80808080 & uVar28 + 0xfefefeff;
  while( true ) {
    if (uVar28 == 0) goto LAB_01174190;
    uVar23 = uVar22 + ((uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                                     (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) >> 3) & uVar19;
    iVar15 = iVar30 + -0x14 + uVar23 * -0x14;
    if ((iVar13 == *(int *)(iVar15 + 8)) &&
       (iVar15 = thunk_FUN_016dd50a(uVar35,*(undefined4 *)(iVar15 + 4)), iVar15 == 0)) break;
    uVar28 = uVar28 - 1 & uVar28;
  }
  iVar26 = iVar30 + uVar23 * -0x14;
  puVar25 = *(uint **)(iVar26 + -8);
  iVar26 = *(int *)(iVar26 + -4) << 2;
  while (iVar26 != 0) {
    uVar14 = *puVar25;
    if (uVar34 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar14,uVar34,&DAT_018890f0);
    }
    iVar13 = FUN_011d018c(iVar18 + uVar14 * 0x28 + 0x14,uVar32,&local_c8,param_4,param_5);
    iVar26 = iVar26 + -4;
    puVar25 = puVar25 + 1;
    if (iVar13 != 0) {
      return iVar13;
    }
  }
  goto LAB_01173efc;
LAB_01174190:
  if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) goto LAB_01173efc;
  iVar26 = iVar26 + 4;
  uVar22 = uVar22 + iVar26;
  goto LAB_011740ec;
}

