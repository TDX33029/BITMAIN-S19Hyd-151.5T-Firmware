// FUN_00bd2dc0 @ 00bd2dc0 size=1096 calls_out=15 calls_in=1
// strings: 

void FUN_00bd2dc0(undefined4 *param_1,int *param_2)

{
  longlong lVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  uint in_fpscr;
  double dVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  longlong lVar34;
  int local_154;
  int local_138;
  float local_134;
  int local_120;
  undefined4 local_11c;
  int local_114;
  int local_110;
  int local_10c;
  int local_58;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[9]) {
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871e48);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871e48);
  case '\x03':
    if ((char)param_2[8] != '\0') {
      if ((char)param_2[8] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01871eb8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871eb8);
    }
    pdVar12 = (double *)param_2[6];
    iVar20 = param_2[7];
    local_154 = param_2[5];
    goto LAB_00bd2f04;
  }
  pdVar12 = (double *)param_2[1];
  iVar20 = param_2[2];
  param_2[3] = *param_2;
  iVar11 = *(int *)(*(int *)(*param_2 + 0x2f0) + 0xc);
  puVar16 = (uint *)(iVar11 + 0x98);
  uVar5 = *(uint *)(iVar11 + 0x98);
  if ((uVar5 < 0xfffffff0) && ((uVar5 & 8) == 0)) {
    if (*puVar16 != uVar5) {
      ClearExclusiveLocal();
      goto LAB_00bd2e68;
    }
    bVar22 = (bool)hasExclusiveAccess(puVar16);
    if (!bVar22) goto LAB_00bd2e68;
    *puVar16 = uVar5 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00bd2e68:
    FUN_0127d66c(puVar16);
  }
  FUN_0128236c(puVar16);
  FUN_0128236c((uint)puVar16 | 1);
  DataMemoryBarrier(0xb);
  FUN_00bd2884(&local_138,iVar11 + 0xa0);
  iVar11 = 100;
  if (local_138 != 2) {
    FUN_00ac8e24(&local_138);
    iVar11 = local_58;
  }
  param_2[4] = iVar11;
  FUN_01282570(puVar16);
  FUN_01282570((uint)puVar16 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar16;
    bVar22 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar22);
  *puVar16 = uVar5 - 0x10;
  if ((uVar5 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar16);
  }
  *(undefined1 *)(param_2 + 8) = 0;
  local_154 = param_2[3];
  param_2[5] = local_154;
  param_2[6] = (int)pdVar12;
  param_2[7] = iVar20;
LAB_00bd2f04:
  if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01871ea8);
  }
  dVar23 = 0.0;
  iVar11 = 0;
  pdVar2 = pdVar12 + iVar20 * 3;
  do {
    iVar19 = *(int *)(pdVar12 + 2);
    if (iVar19 == 0) {
      uVar6 = 0x2d;
      puVar10 = &DAT_0186ac08;
      puVar7 = &DAT_0034ae54;
LAB_00bd31a0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(puVar7,uVar6,puVar10);
    }
    dVar25 = *pdVar12;
    iVar21 = 0;
    iVar3 = *(int *)((int)pdVar12 + 0xc);
    lVar1 = 0;
    do {
      iVar4 = iVar3 + iVar21 * 0x18;
      iVar9 = *(int *)(iVar4 + 0x14);
      if (iVar9 == 0) {
        uVar6 = 0x39;
        puVar7 = &DAT_0034ae25;
        puVar10 = &DAT_0186aba8;
        goto LAB_00bd31a0;
      }
      iVar13 = iVar9 << 2;
      iVar8 = 0;
      puVar16 = *(uint **)(iVar4 + 0x10);
      uVar5 = 0;
      do {
        if (*(uint *)(iVar4 + 8) <= *puVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0034ae41,0x13,&DAT_0186abb8);
        }
        uVar14 = *(uint *)(*(int *)(iVar4 + 4) + *puVar16 * 4);
        puVar16 = puVar16 + 1;
        bVar22 = CARRY4(uVar5,uVar14);
        uVar5 = uVar5 + uVar14;
        iVar8 = iVar8 + (uint)bVar22;
        iVar13 = iVar13 + -4;
      } while (iVar13 != 0);
      lVar34 = FUN_01846088(uVar5,iVar8,iVar9,0);
      lVar1 = lVar34 + lVar1;
      iVar21 = iVar21 + 1;
    } while (iVar21 != iVar19);
    iVar19 = FUN_01846088((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar19,0);
    dVar23 = dVar23 + dVar25;
    iVar11 = iVar11 + iVar19;
    pdVar12 = pdVar12 + 3;
    if (pdVar12 == pdVar2) {
      FUN_009a7ebc(&local_138,*(int *)(local_154 + 0x2f0) + 8);
      if (local_120 != 0) {
        thunk_FUN_016d3fb4(local_11c);
      }
      puVar17 = (undefined4 *)(local_110 + 4);
      for (iVar19 = local_10c; iVar19 != 0; iVar19 = iVar19 + -1) {
        if (puVar17[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar17);
        }
        puVar17 = puVar17 + 6;
      }
      if (local_114 != 0) {
        thunk_FUN_016d3fb4(local_110);
      }
      iVar21 = param_2[3];
      *(undefined1 *)(param_2 + 8) = 1;
      iVar3 = param_2[4];
      iVar19 = *(int *)(iVar21 + 0x1d8);
      fVar24 = local_134;
      if (local_138 == 0) {
        fVar24 = *(float *)(iVar21 + 0x1d0);
      }
      iVar4 = *(int *)(iVar19 + 0xbc);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_01879bd0);
      }
      uVar18 = *(undefined4 *)(iVar21 + 0x2e8);
      uVar6 = FUN_018462e8(iVar11,iVar20);
      uVar15 = *(undefined4 *)(iVar19 + 0xb8);
      dVar26 = (double)VectorUnsignedToFloat(iVar20,(byte)(in_fpscr >> 0x16) & 3);
      dVar25 = (double)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      uVar6 = FUN_018462e8(uVar15,iVar4);
      dVar27 = (double)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      dVar27 = (dVar23 / dVar26) / dVar27;
      dVar29 = *(double *)(iVar21 + 0x1a8);
      dVar31 = *(double *)(iVar21 + 0x1b0);
      dVar32 = *(double *)(iVar21 + 0x1b8);
      dVar33 = *(double *)(iVar21 + 0x1c0);
      *param_1 = 0;
      param_1[1] = 0;
      dVar23 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
      dVar30 = *(double *)(iVar21 + 0x1c8);
      *(undefined1 *)(param_2 + 9) = 1;
      dVar28 = (double)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      dVar26 = (double)VectorUnsignedToFloat(uVar18,(byte)(in_fpscr >> 0x16) & 3);
      *(double *)(param_1 + 2) =
           dVar30 + dVar33 * dVar28 +
           dVar27 * dVar27 * dVar23 *
           (dVar31 + (dVar25 / 1000000.0) * dVar29) * (dVar32 * (double)fVar24 + 1.0) * dVar26;
      return;
    }
  } while( true );
}

