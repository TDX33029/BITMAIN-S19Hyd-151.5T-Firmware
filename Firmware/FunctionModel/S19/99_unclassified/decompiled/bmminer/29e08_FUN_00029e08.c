// FUN_00029e08 @ 00029e08  size=1244  callers=1
// program: bmminer


undefined4 FUN_00029e08(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint in_fpscr;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 *local_58;
  
  FUN_00036c6c();
  pvVar1 = (void *)(DAT_000892e0 * 0x66666667);
  iVar2 = DAT_000892e0 >> 0x1f;
  if (DAT_000892e0 % 5 == 0) {
    if (DAT_0008a7e0 == 1) {
      memset(&DAT_000892e8,0,0x140);
      memset(&DAT_00089428,0,0x20);
      pvVar1 = memset(&DAT_00089448,0,0x20);
      DAT_00089468 = 0;
      DAT_0008946c = 0;
      DAT_00089470 = 0;
      DAT_00089474 = 0;
      DAT_00089478 = 0;
      DAT_0008947c = 0;
      DAT_00089480 = 0;
      DAT_00089484 = 0;
      DAT_0008a7e0 = 0;
    }
    iVar2 = FUN_00029324(pvVar1);
    puVar16 = &DAT_00089428;
    dVar23 = 0.0;
    iVar8 = iVar2 - DAT_000892bc;
    puVar15 = &DAT_00089448;
    iVar13 = 0;
    local_58 = &DAT_00089478;
    DAT_000892bc = iVar2;
    do {
      iVar2 = FUN_000201d8(iVar13);
      if (iVar2 != 0) {
        uVar18 = (&DAT_00b2d1e4)[iVar13 * 2];
        iVar3 = (&DAT_00089468)[iVar13] + 1;
        iVar14 = (&DAT_00089478)[iVar13];
        iVar2 = (iVar13 * 10 + (&DAT_00089468)[iVar13]) * 8;
        puVar5 = (undefined4 *)(iVar3 * 0x66666667);
        if (iVar14 < 10) {
          puVar5 = local_58;
        }
        uVar12 = *puVar15;
        if (iVar14 < 10) {
          iVar14 = iVar14 + 1;
          puVar5[iVar13] = iVar14;
        }
        iVar3 = iVar3 % 10;
        uVar4 = (&DAT_00b2d1e0)[iVar13 * 2];
        uVar6 = puVar16[1];
        (&DAT_00089468)[iVar13] = iVar3;
        uVar9 = *puVar16;
        uVar17 = puVar15[1];
        *puVar16 = uVar4;
        uVar10 = uVar4 - uVar9;
        puVar16[1] = uVar18;
        iVar7 = uVar18 - (uVar6 + (uVar4 < uVar9));
        *(uint *)(&DAT_000892e8 + iVar2) = uVar10;
        uVar18 = uVar10 + uVar12;
        *(int *)(&DAT_000892ec + iVar2) = iVar7;
        uVar12 = iVar7 + uVar17 + (uint)CARRY4(uVar10,uVar12);
        *puVar15 = uVar18;
        puVar15[1] = uVar12;
        dVar21 = (double)FUN_000679c4(uVar18,uVar12);
        dVar20 = (double)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
        dVar22 = (double)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
        dVar20 = (((dVar21 * 4294967295.0) / dVar22) / dVar20) / 1000000000.0;
        FUN_000203fc(SUB84(dVar20,0),iVar13);
        dVar23 = dVar23 + dVar20;
        uVar12 = *puVar15;
        iVar2 = (iVar13 * 10 + iVar3) * 8;
        uVar18 = *(uint *)(&DAT_000892e8 + iVar2);
        iVar2 = *(int *)(&DAT_000892ec + iVar2);
        *puVar15 = uVar12 - uVar18;
        puVar15[1] = puVar15[1] - (iVar2 + (uint)(uVar12 < uVar18));
      }
      iVar13 = iVar13 + 1;
      puVar16 = puVar16 + 2;
      puVar15 = puVar15 + 2;
    } while (iVar13 != 4);
    FUN_000201f0(SUB84(dVar23,0));
    sprintf(&DAT_0008a84c,"%.2f",dVar23);
    if (DAT_0008a7e4 == 1) {
      DAT_00089488 = 0;
      DAT_0008948c = 0;
      memset(&DAT_00089490,0,0xb40);
      DAT_00089fd0 = 0;
      DAT_0008a7e4 = 0;
    }
    iVar8 = FUN_00029324();
    if (DAT_00b2d258 == 0 && DAT_00b2d25c == 0) {
      iVar2 = DAT_000892e0 >> 0x1f;
      DAT_000892c0 = iVar8;
    }
    else {
      iVar2 = iVar8 - DAT_000892c0;
      uVar18 = DAT_00b2d258 - DAT_00089488;
      DAT_000892c0 = iVar8;
      dVar23 = (double)FUN_000679c4(-uVar18,(uVar18 & 0xfffffffe) +
                                            ((uint)(uVar18 * -0x80000000 < uVar18) * -2 -
                                            (DAT_00b2d25c -
                                            (DAT_0008948c + (uint)(DAT_00b2d258 < DAT_00089488)))) +
                                            (uint)CARRY4(uVar18 * 0x7fffffff,uVar18 * 0x7fffffff) +
                                            (uint)CARRY4(uVar18 * -2,uVar18));
      dVar20 = 1000000000.0;
      pdVar11 = (double *)&DAT_00089490;
      dVar23 = dVar23 / 1000000000.0;
      if (iVar2 != 0) {
        dVar20 = (double)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
      }
      uVar18 = DAT_00089fd0 >> 3;
      uVar12 = DAT_00089fd0 + 1;
      iVar8 = DAT_00089fd0 + (uVar18 / 0x2d) * -0x168;
      if (iVar2 != 0) {
        dVar23 = dVar23 / dVar20;
      }
      dVar20 = 0.0;
      DAT_00089fd0 = uVar12;
      (&DAT_00089490)[iVar8] = dVar23;
      uVar4 = 0;
      do {
        bVar19 = uVar12 == uVar4;
        uVar4 = uVar4 + 1;
        if (bVar19) goto LAB_0002a208;
        dVar23 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        dVar20 = dVar20 + dVar23;
      } while (uVar4 != 0x168);
      if (uVar12 < 0x168) {
LAB_0002a208:
        dVar23 = (double)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
      }
      else {
        dVar23 = 360.0;
      }
      DAT_0008a860 = dVar20 / dVar23;
      FUN_00020214(SUB84(DAT_0008a860,0),uVar18 * 0x16c16c17);
      iVar2 = DAT_000892e0 >> 0x1f;
      DAT_00089488 = DAT_00b2d258;
      DAT_0008948c = DAT_00b2d25c;
    }
  }
  if ((DAT_000892e0 == ((DAT_000892e0 / 10 + (DAT_000892e0 >> 0x1f)) - iVar2) * 10) &&
     (iVar2 = FUN_00036360(DAT_000892e0 * 0x66666667), iVar2 == 2)) {
    FUN_00030dec();
  }
  DAT_000892e0 = DAT_000892e0 + 1;
  iVar2 = DAT_000892e0 >> 0x1f;
  if (DAT_000892e0 == (DAT_000892e0 / 0x3c) * 0x3c) {
    FUN_00036d8c();
    if (DAT_000892e0 % 0x708 == 0) goto LAB_00029f18;
  }
  else {
    if (DAT_000892e0 % 0x708 != 0) goto LAB_00029eb0;
LAB_00029f18:
    FUN_00029354();
  }
  iVar2 = DAT_000892e0 >> 0x1f;
  if (DAT_000892e0 == (DAT_000892e0 / 0x3c) * 0x3c) {
    FUN_00030608();
    FUN_000308fc();
    iVar2 = DAT_000892e0 >> 0x1f;
  }
LAB_00029eb0:
  if (DAT_000892e0 + ((DAT_000892e0 / 900 + (DAT_000892e0 >> 0x1f)) - iVar2) * -900 == 0) {
    FUN_000294c0();
  }
  return 0;
}

