// FUN_0003d480 @ 0003d480  size=844  callers=1
// program: bmminer


void FUN_0003d480(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 extraout_s1;
  double dVar14;
  double dVar15;
  double param2;
  double param4;
  undefined4 local_2068;
  undefined4 uStack_2064;
  char acStack_2060 [8196];
  
  if (DAT_000c9478 == 1) {
    memset(&DAT_000c71a8,0,0x140);
    memset(&DAT_000c72e8,0,0x20);
    memset(&DAT_000c7308,0,0x20);
    memset(&DAT_000c7328,0,0x140);
    memset(&DAT_000c7468,0,0x20);
    memset(&DAT_000c7488,0,0x20);
    DAT_000c74a8 = 0;
    DAT_000c74b8 = 0;
    DAT_000c74ac = 0;
    DAT_000c74b0 = 0;
    DAT_000c74b4 = 0;
    DAT_000c9478 = 0;
  }
  pdVar8 = (double *)&DAT_000c7488;
  iVar9 = 0;
  param2 = 0.0;
  do {
    iVar1 = FUN_0002a6f0(iVar9);
    if (iVar1 != 0) {
      iVar7 = (&DAT_000c74a8)[iVar9];
      iVar1 = iVar7 + 1;
      (&DAT_000c74a8)[iVar9] = iVar1 % 10;
      FUN_0004bd34(&local_2068,iVar1,iVar1 * 0x66666667);
      if (*(char *)((int)&DAT_000c74b8 + iVar9) == '\0') {
        (&DAT_000c72e8)[iVar9 * 2] = (&DAT_012a2918)[iVar9 * 2];
        (&DAT_000c72ec)[iVar9 * 2] = (&DAT_012a291c)[iVar9 * 2];
        (&DAT_000c7468)[iVar9 * 2] = local_2068;
        (&DAT_000c746c)[iVar9 * 2] = uStack_2064;
        *(undefined1 *)((int)&DAT_000c74b8 + iVar9) = 1;
        dVar14 = 0.0;
      }
      else {
        uVar11 = (&DAT_012a2918)[iVar9 * 2];
        iVar2 = (&DAT_012a291c)[iVar9 * 2];
        iVar7 = (iVar7 + iVar9 * 10) * 8;
        uVar3 = (&DAT_000c72e8)[iVar9 * 2];
        (&DAT_000c72e8)[iVar9 * 2] = uVar11;
        uVar6 = uVar11 - uVar3;
        iVar12 = (&DAT_000c730c)[iVar9 * 2];
        uVar10 = (&DAT_000c7308)[iVar9 * 2];
        iVar4 = iVar2 - ((&DAT_000c72ec)[iVar9 * 2] + (uint)(uVar11 < uVar3));
        *(uint *)(&DAT_000c71a8 + iVar7) = uVar6;
        (&DAT_000c7308)[iVar9 * 2] = uVar10 + uVar6;
        (&DAT_000c72ec)[iVar9 * 2] = iVar2;
        *(int *)(&DAT_000c71ac + iVar7) = iVar4;
        (&DAT_000c730c)[iVar9 * 2] = iVar12 + iVar4 + (uint)CARRY4(uVar10,uVar6);
        uVar13 = FUN_0004c05c(&local_2068,&DAT_000c7468 + iVar9 * 2);
        dVar15 = (double)CONCAT44(extraout_s1,uVar13);
        param4 = dVar15 + *pdVar8;
        *(double *)(&DAT_000c7328 + iVar7) = dVar15;
        (&DAT_000c7468)[iVar9 * 2] = local_2068;
        (&DAT_000c746c)[iVar9 * 2] = uStack_2064;
        uVar13 = (&DAT_000c7308)[iVar9 * 2];
        uVar5 = (&DAT_000c730c)[iVar9 * 2];
        *pdVar8 = param4;
        dVar14 = (double)FUN_00098c14(uVar13,uVar5);
        dVar14 = dVar14 * 4294967295.0;
        if (1.0 < param4) {
          dVar14 = dVar14 / param4;
        }
        dVar14 = dVar14 / 1000000000.0;
        if (4 < DAT_000be63c) {
          snprintf(acStack_2060,0x2000,"1x: %.6f 10x: %.6f\n",dVar15,param4);
          FUN_0004948c(4,acStack_2060,0);
        }
      }
      FUN_0002a914(SUB84(dVar14,0),iVar9);
      dVar15 = *pdVar8;
      uVar6 = (&DAT_000c7308)[iVar9 * 2];
      iVar1 = (iVar1 % 10 + iVar9 * 10) * 8;
      param2 = param2 + dVar14;
      dVar14 = *(double *)(&DAT_000c7328 + iVar1);
      uVar3 = *(uint *)(&DAT_000c71a8 + iVar1);
      iVar1 = *(int *)(&DAT_000c71ac + iVar1);
      (&DAT_000c7308)[iVar9 * 2] = uVar6 - uVar3;
      (&DAT_000c730c)[iVar9 * 2] = (&DAT_000c730c)[iVar9 * 2] - (iVar1 + (uint)(uVar6 < uVar3));
      *pdVar8 = dVar15 - dVar14;
    }
    iVar9 = iVar9 + 1;
    pdVar8 = pdVar8 + 1;
  } while (iVar9 != 4);
  FUN_0002a708(SUB84(param2,0));
  sprintf(&DAT_000c94ec,"%.2f",param2);
  return;
}

