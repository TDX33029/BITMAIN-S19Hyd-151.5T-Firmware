// FUN_00d57838 @ 00d57838 size=1392 calls_out=13 calls_in=2
// strings: 

longlong FUN_00d57838(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  double *pdVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  bool bVar23;
  uint in_fpscr;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  double dVar28;
  longlong lVar29;
  longlong lVar30;
  int local_118;
  int local_114;
  int local_110;
  undefined *local_f8;
  double *local_f4;
  undefined *local_f0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined *local_98;
  double *local_94;
  uint local_90;
  uint local_8c;
  
  uVar18 = *param_2;
  uVar19 = param_2[1];
  iVar1 = 2;
  if ((uint)(uVar18 < 5) <= -uVar19) {
    iVar1 = uVar18 - 5;
  }
  if (iVar1 == 0) {
    FUN_00d44f44(&local_118,*(undefined4 *)(*(int *)(param_1 + 0x618) + 0x3c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x618) + 0x3c8),*(undefined4 *)(param_1 + 0x204)
                );
    if (local_118 == -0x80000000) {
      local_98 = (undefined *)0x3;
      local_f0 = (undefined *)local_114;
      local_f4 = (double *)0x15;
      local_f8 = &DAT_00357413;
      lVar30 = FUN_00c70528(&local_f8,&local_98);
      return lVar30;
    }
    if (local_110 == 0) {
      local_a8 = 0;
      iVar1 = 8;
      iVar8 = 0;
    }
    else {
      iVar1 = thunk_FUN_016d4a50(local_110 << 3);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,local_110 << 3);
      }
      iVar8 = 0;
      do {
        iVar2 = local_114 + iVar8 * 0x20;
        iVar21 = *(int *)(iVar2 + 0x18);
        if (iVar21 == 0) {
          uVar27 = 0x2d;
          puVar7 = &DAT_0186ac08;
          puVar10 = &DAT_0034ae54;
LAB_00d588c8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(puVar10,uVar27,puVar7);
        }
        dVar24 = *(double *)(iVar2 + 8);
        iVar20 = 0;
        iVar2 = *(int *)(iVar2 + 0x14);
        lVar30 = 0;
        do {
          iVar3 = iVar2 + iVar20 * 0x18;
          iVar9 = *(int *)(iVar3 + 0x14);
          if (iVar9 == 0) {
            uVar27 = 0x39;
            puVar10 = &DAT_0034ae25;
            puVar7 = &DAT_0186aba8;
            goto LAB_00d588c8;
          }
          iVar12 = iVar9 << 2;
          iVar6 = 0;
          puVar16 = *(uint **)(iVar3 + 0x10);
          uVar18 = 0;
          do {
            if (*(uint *)(iVar3 + 8) <= *puVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_0034ae41,0x13,&DAT_0186abb8);
            }
            uVar19 = *(uint *)(*(int *)(iVar3 + 4) + *puVar16 * 4);
            puVar16 = puVar16 + 1;
            bVar22 = CARRY4(uVar18,uVar19);
            uVar18 = uVar18 + uVar19;
            iVar6 = iVar6 + (uint)bVar22;
            iVar12 = iVar12 + -4;
          } while (iVar12 != 0);
          lVar29 = FUN_01846088(uVar18,iVar6,iVar9,0);
          lVar30 = lVar29 + lVar30;
          iVar20 = iVar20 + 1;
        } while (iVar20 != iVar21);
        iVar2 = *(int *)(param_1 + 0x1d8);
        iVar20 = *(int *)(iVar2 + 0xbc);
        if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_01879bd0);
        }
        uVar27 = FUN_01846088((int)lVar30,(int)((ulonglong)lVar30 >> 0x20),iVar21,0);
        uVar13 = *(undefined4 *)(iVar2 + 0xb8);
        uVar4 = FUN_018462e8(uVar13,iVar20);
        dVar25 = (double)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
        dVar26 = (double)VectorUnsignedToFloat(uVar27,(byte)(in_fpscr >> 0x16) & 3);
        iVar2 = iVar8 * 8;
        iVar8 = iVar8 + 1;
        dVar24 = dVar24 / dVar25;
        dVar25 = (double)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
        *(double *)(iVar1 + iVar2) =
             dVar24 * dVar24 * dVar25 *
             (*(double *)(param_1 + 0x1b0) + (dVar26 / 1000000.0) * *(double *)(param_1 + 0x1a8)) *
             (*(double *)(param_1 + 0x1b8) * (double)*(float *)(param_1 + 0x1d0) + 1.0);
      } while (iVar8 != local_110);
      local_a8 = local_110;
    }
    iStack_a4 = iVar1;
    iStack_a0 = iVar8;
    FUN_00d59880(param_1,&local_a8);
    iVar1 = 0;
    while (iVar1 != local_110) {
      iVar8 = local_114 + iVar1 * 0x20;
      iVar2 = *(int *)(iVar8 + 0x14);
      puVar14 = (undefined4 *)(iVar2 + 0x10);
      for (iVar21 = *(int *)(iVar8 + 0x18); iVar21 != 0; iVar21 = iVar21 + -1) {
        if (puVar14[-4] != 0) {
          thunk_FUN_016d3fb4(puVar14[-3]);
        }
        if (puVar14[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar14);
        }
        puVar14 = puVar14 + 6;
      }
      iVar1 = iVar1 + 1;
      if (*(int *)(iVar8 + 0x10) != 0) {
        thunk_FUN_016d3fb4(iVar2);
      }
    }
    if (local_118 != 0) {
      thunk_FUN_016d3fb4(local_114);
    }
    uVar19 = 0;
    local_94 = (double *)0x0;
    local_98 = (undefined *)0x4;
    local_8c = 0;
    local_90 = 0;
    DataMemoryBarrier(0xb);
    if (DAT_018d7d14 == 0) {
      FUN_00a6a108(0,0);
      FUN_00a6a240(0,&local_98);
    }
    uVar18 = 5;
    goto LAB_00d5881c;
  }
  if (iVar1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00d57a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar30 = (*(code *)(&DAT_00d57a94 + *(int *)(&DAT_00d57a94 + *param_2 * 4)))
                       (param_2[2],param_2[3],param_2[4],param_2[5]);
    return lVar30;
  }
  puVar10 = *(undefined **)(*(int *)(param_1 + 0x618) + 0x3d4);
  bVar23 = (undefined *)0x1ffffffe < puVar10;
  bVar22 = puVar10 == (undefined *)0x1fffffff;
  uVar11 = (int)puVar10 * 8;
  if (puVar10 < (undefined *)0x20000000) {
    bVar23 = 0x7ffffff7 < uVar11;
    bVar22 = uVar11 == 0x7ffffff8;
  }
  if (bVar23 && !bVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  dVar24 = *(double *)(param_2 + 2);
  dVar25 = *(double *)(param_1 + 0x1c0);
  dVar26 = *(double *)(param_1 + 0x1c8);
  uVar27 = *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0xc4);
  if (uVar11 == 0) {
    local_f4 = (double *)&DAT_00000008;
    local_f8 = (undefined *)0x0;
  }
  else {
    local_f4 = (double *)thunk_FUN_016d4a50(uVar11);
    local_f8 = puVar10;
    if (local_f4 == (double *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar11);
    }
  }
  dVar28 = (double)VectorUnsignedToFloat(uVar27,(byte)(in_fpscr >> 0x16) & 3);
  local_90 = 0;
  dVar28 = (dVar24 - (dVar26 + dVar25 * 100.0)) / dVar28;
  pdVar5 = local_f4;
  if (puVar10 < (undefined *)0x2) {
    local_f0 = (undefined *)0x1;
    if (puVar10 != (undefined *)0x0) goto LAB_00d5868c;
    local_f0 = (undefined *)0x0;
  }
  else {
    puVar7 = puVar10 + -1;
    do {
      *pdVar5 = dVar28;
      pdVar5 = pdVar5 + 1;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    local_f0 = puVar10;
LAB_00d5868c:
    *pdVar5 = dVar28;
  }
  local_98 = local_f8;
  local_94 = local_f4;
  FUN_00d59880(param_1,&local_f8);
  local_94 = (double *)0x0;
  local_98 = (undefined *)0x4;
  local_8c = 0;
  local_90 = 0;
  DataMemoryBarrier(0xb);
  if (DAT_018d7d14 == 0) {
    FUN_00a6a108(SUB84(dVar24,0),1);
    FUN_00a6a240(0,&local_98);
  }
  local_98 = (undefined *)param_2[2];
  local_94 = (double *)param_2[3];
  local_90 = param_2[4];
  local_8c = param_2[5];
LAB_00d5881c:
  *(undefined **)(param_1 + 0x518) = local_98;
  *(uint *)(param_1 + 0x510) = uVar18;
  *(uint *)(param_1 + 0x514) = uVar19;
  *(double **)(param_1 + 0x51c) = local_94;
  *(uint *)(param_1 + 0x520) = local_90;
  *(uint *)(param_1 + 0x524) = local_8c;
  uVar18 = param_2[1];
  uVar19 = param_2[2];
  uVar11 = param_2[3];
  uVar15 = param_2[4];
  uVar17 = param_2[5];
  *(uint *)(param_1 + 0x588) = *param_2;
  *(uint *)(param_1 + 0x58c) = uVar18;
  *(uint *)(param_1 + 0x590) = uVar19;
  *(uint *)(param_1 + 0x594) = uVar11;
  *(uint *)(param_1 + 0x598) = uVar15;
  *(uint *)(param_1 + 0x59c) = uVar17;
  return (ulonglong)DAT_018dd947 << 0x20;
}

