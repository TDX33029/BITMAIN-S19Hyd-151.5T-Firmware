// FUN_0117a160 @ 0117a160 size=2040 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0117a160(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

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
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint *puVar24;
  int iVar25;
  bool bVar26;
  int iVar27;
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
  uVar34 = param_1[0x13];
  local_f4 = *(int *)(param_2 + 4);
  local_f0 = *(undefined4 *)(param_2 + 8);
  local_dc = *(undefined4 *)(param_2 + 0xc);
  iVar27 = param_1[0x12];
  iVar33 = uVar34 * 100 + iVar27;
  if (local_f4 == 0) {
    local_dc = 0;
  }
  local_fc = (uint)(local_f4 != 0);
  iVar5 = param_1[0x10];
  local_e8 = 0;
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
    uVar18 = param_1[1];
    iVar19 = param_1[3];
    iVar20 = param_1[0xf];
LAB_0117a284:
    do {
      uVar38 = FUN_00f45584(&local_fc);
      uVar32 = (undefined4)((ulonglong)uVar38 >> 0x20);
      iVar25 = (int)uVar38;
      if (iVar25 == 0) {
        return 0;
      }
      uVar35 = *(undefined4 *)(iVar25 + 4);
      iVar36 = *(int *)(iVar25 + 8);
      iVar13 = iVar5 << 5;
      iVar15 = iVar20;
      do {
        if (*(int *)(iVar15 + 8) == iVar36) {
          uVar23 = *(undefined4 *)(iVar15 + 4);
          iVar12 = thunk_FUN_016dd50a(uVar23,uVar35,iVar36);
          if (iVar12 == 0) {
            local_c8 = -0x80000000;
            local_c4 = uVar23;
            local_c0 = iVar36;
            local_bc = param_3;
            iVar13 = FUN_011d018c(iVar15 + 0xc,uVar32,&local_c8,param_4,param_5);
            if (iVar13 != 0) {
              return iVar13;
            }
            if (iVar19 == 0) goto LAB_0117a284;
            uVar35 = *(undefined4 *)(iVar25 + 4);
            iVar13 = *(int *)(iVar25 + 8);
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
            uVar21 = (uint)lVar2;
            uVar17 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                     uVar21 >> 0x18) ^
                     uStack_94 * 0x2df45158 +
                     uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20);
            uVar31 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                     uVar17 >> 0x18;
            uVar22 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
                     (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
            lVar3 = (ulonglong)~(uint)local_90 * (ulonglong)uVar31;
            uVar37 = (uint)lVar3;
            uVar21 = (uVar14 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 |
                      (local_98 >> 0x10 & 0xff) << 8 | local_98 >> 0x18) * -0x4c957f2e +
                     uVar28 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
            uVar28 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 |
                      (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) ^
                     (uint)((ulonglong)uVar14 * 0x2df45158);
            uVar14 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                     uVar28 >> 0x18) * ~(uint)local_90 +
                     uVar31 * ~local_90._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
            lVar2 = (ulonglong)uVar22 * (ulonglong)uVar28;
            iVar25 = 0;
            uVar14 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 |
                      (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) ^ (uint)lVar2;
            uVar17 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
                     uVar37 >> 0x18) ^
                     uVar17 * uVar22 +
                     uVar28 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                               ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
                     (int)((ulonglong)lVar2 >> 0x20);
            uVar21 = uVar17;
            if ((uVar28 & 0x20) != 0) {
              uVar21 = uVar14;
              uVar14 = uVar17;
            }
            uVar21 = uVar14 << (uVar28 & 0x1f) | (uVar21 >> 1) >> (~uVar28 & 0x1f);
            uVar14 = uVar21 >> 0x19;
            goto LAB_0117a474;
          }
        }
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + -0x20;
      } while (iVar13 != 0);
      local_d8 = 0x80000000;
      local_d4 = uVar35;
      local_d0 = iVar36;
      local_cc = param_3;
      if (uVar34 == 0) goto LAB_0117a740;
      bVar26 = false;
      iVar13 = iVar27;
      do {
        while( true ) {
          cVar4 = FUN_01164a60(iVar13,*(undefined4 *)(iVar25 + 4),*(undefined4 *)(iVar25 + 8));
          iVar15 = iVar13 + 100;
          if (cVar4 != '\0') break;
          iVar13 = iVar15;
          if (iVar15 == iVar33) {
            if (!bVar26) goto LAB_0117a740;
            goto LAB_0117a284;
          }
        }
        iVar13 = FUN_011d018c(iVar13 + 0x50,uVar32,&local_d8,param_4,param_5);
        if (iVar13 != 0) {
          return iVar13;
        }
        bVar26 = true;
        iVar13 = iVar15;
      } while (iVar15 != iVar33);
    } while( true );
  }
  if (uVar34 != 0) {
LAB_0117a660:
    do {
      uVar38 = FUN_00f45584(&local_fc);
      iVar25 = (int)uVar38;
      if (iVar25 == 0) {
        return 0;
      }
      local_d4 = *(undefined4 *)(iVar25 + 4);
      local_d0 = *(int *)(iVar25 + 8);
      bVar26 = false;
      local_d8 = 0x80000000;
      iVar5 = iVar27;
      local_cc = param_3;
      do {
        while( true ) {
          cVar4 = FUN_01164a60(iVar5,*(undefined4 *)(iVar25 + 4),*(undefined4 *)(iVar25 + 8));
          iVar10 = iVar5 + 100;
          if (cVar4 != '\0') break;
          iVar5 = iVar10;
          if (iVar10 == iVar33) {
            if (!bVar26) goto LAB_0117a740;
            goto LAB_0117a660;
          }
        }
        iVar5 = FUN_011d018c(iVar5 + 0x50,(int)((ulonglong)uVar38 >> 0x20),&local_d8,param_4,param_5
                            );
        if (iVar5 != 0) {
          return iVar5;
        }
        bVar26 = true;
        iVar5 = iVar10;
      } while (iVar10 != iVar33);
    } while( true );
  }
  iVar25 = FUN_00f45584(&local_fc);
  if (iVar25 == 0) {
    return 0;
  }
  local_d4 = *(undefined4 *)(iVar25 + 4);
  local_d0 = *(int *)(iVar25 + 8);
  local_d8 = 0x80000000;
  local_cc = param_3;
LAB_0117a740:
  piVar29 = (int *)param_1[0xc];
  do {
    iVar27 = *piVar29;
    bVar26 = (bool)hasExclusiveAccess(piVar29);
  } while (!bVar26);
  *piVar29 = iVar27 + 1;
  if (iVar27 < 0) {
LAB_0117a95c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x117a95c);
    (*pcVar1)();
  }
  iVar27 = param_1[0xd];
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
      iVar33 = *piVar16;
      bVar26 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar26);
    *piVar16 = iVar33 + 1;
    if (iVar33 < 0) goto LAB_0117a95c;
    uVar34 = 0;
    iVar33 = param_1[0xc];
    uVar7 = param_1[0xd];
    uVar32 = *(undefined4 *)(param_4 + 0xc);
    uVar35 = *(undefined4 *)(param_4 + 0x10);
    uVar6 = (*(int **)(param_4 + 4))[1];
    if (uVar6 <= uVar7) {
      iVar5 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar33 + 8,uVar6);
      uVar34 = uVar6;
      if (iVar5 != 0) {
        uVar34 = 0;
      }
    }
    local_b0 = FUN_011e1508(iVar33 + 8 + uVar34,uVar7 - uVar34);
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
  uVar32 = *(undefined4 *)(iVar25 + 4);
  iVar5 = *(int *)(iVar25 + 8);
  iVar33 = 1;
  if (iVar5 != 0) {
    iVar33 = thunk_FUN_016d4a50(iVar5);
    if (iVar33 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
  }
  FUN_016dd1aa(iVar33,uVar32,iVar5);
  local_50 = 6;
  local_88 = &DAT_8000000b;
  *piVar16 = iVar5;
  piVar16[1] = iVar33;
  piVar16[2] = iVar5;
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
  local_2c = iVar27;
  local_38 = uVar38;
  local_90 = local_b0;
  iVar27 = thunk_FUN_016d4a50(0x80);
  if (iVar27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar27,&local_a8,0x80);
  return iVar27;
LAB_0117a474:
  uVar21 = uVar18 & uVar21;
  uVar17 = *(uint *)(iVar30 + uVar21);
  uVar28 = uVar17 ^ uVar14 * 0x1010101;
  uVar28 = ~uVar28 & 0x80808080 & uVar28 + 0xfefefeff;
  while( true ) {
    if (uVar28 == 0) goto LAB_0117a518;
    uVar22 = uVar21 + ((uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                                     (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) >> 3) & uVar18;
    iVar15 = iVar30 + -0x14 + uVar22 * -0x14;
    if ((iVar13 == *(int *)(iVar15 + 8)) &&
       (iVar15 = thunk_FUN_016dd50a(uVar35,*(undefined4 *)(iVar15 + 4)), iVar15 == 0)) break;
    uVar28 = uVar28 - 1 & uVar28;
  }
  iVar25 = iVar30 + uVar22 * -0x14;
  puVar24 = *(uint **)(iVar25 + -8);
  iVar25 = *(int *)(iVar25 + -4) << 2;
  while (iVar25 != 0) {
    uVar14 = *puVar24;
    if (uVar34 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar14,uVar34,&DAT_018890f0);
    }
    iVar13 = FUN_011d018c(uVar14 * 100 + iVar27 + 0x50,uVar32,&local_c8,param_4,param_5);
    iVar25 = iVar25 + -4;
    puVar24 = puVar24 + 1;
    if (iVar13 != 0) {
      return iVar13;
    }
  }
  goto LAB_0117a284;
LAB_0117a518:
  if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) goto LAB_0117a284;
  iVar25 = iVar25 + 4;
  uVar21 = uVar21 + iVar25;
  goto LAB_0117a474;
}

