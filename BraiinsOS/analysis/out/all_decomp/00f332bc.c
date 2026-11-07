// FUN_00f332bc @ 00f332bc size=276 calls_out=3 calls_in=1
// strings: 

void FUN_00f332bc(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    puVar7 = (undefined1 *)*param_1;
    do {
      *puVar7 = 0;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar4 != 0);
  }
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  if (param_1[3] != 0) {
    iVar11 = param_1[2];
    iVar4 = param_1[3] * 0x18;
    do {
      FUN_00f33d14(iVar11);
      iVar11 = iVar11 + 0x18;
      iVar4 = iVar4 + -0x18;
    } while (iVar4 != 0);
  }
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    puVar7 = (undefined1 *)*param_1;
    do {
      *puVar7 = 0;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar4 != 0);
  }
  if (param_1[1] != 0) {
    thunk_FUN_016d3fb4(*param_1);
  }
  iVar5 = param_1[2];
  iVar8 = param_1[3];
  iVar4 = iVar5;
  iVar11 = iVar8;
  if (iVar8 != 0) {
    iVar15 = iVar8 * 0x18;
    iVar14 = iVar5;
    do {
      FUN_00f33d14(iVar14);
      iVar14 = iVar14 + 0x18;
      iVar15 = iVar15 + -0x18;
    } while (iVar15 != 0);
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    FUN_00f333d0(iVar4);
    iVar4 = iVar4 + 0x18;
  }
  if (iVar8 == 0) {
    return;
  }
  if (iVar5 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar11 = uVar12 - 0x10, uVar12 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar8 = iVar11 * uVar16 + iVar11 + -4;
  iVar11 = iVar15 + iVar8;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar11 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar11 - iVar5) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar12 = 1 << uVar16;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar9 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

