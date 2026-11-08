// FUN_0151d1ec @ 0151d1ec size=204 calls_out=1 calls_in=0
// strings: 

void FUN_0151d1ec(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  iVar11 = 0;
  uVar14 = *(uint *)(param_1 + 8);
  if (uVar5 == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x10);
    uVar4 = uVar6 - uVar14;
    if (uVar6 < uVar14) {
      uVar4 = uVar6;
    }
    if (uVar14 - uVar4 < uVar5) {
      iVar11 = uVar5 - (uVar14 - uVar4);
      uVar5 = uVar14;
    }
    else {
      uVar5 = uVar4 + uVar5;
    }
  }
  iVar7 = *(int *)(param_1 + 0xc);
  puVar9 = (undefined4 *)(iVar7 + uVar4 * 0xc + 4);
  for (iVar13 = uVar5 - uVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (puVar9[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar9);
    }
    puVar9 = puVar9 + 3;
  }
  puVar9 = (undefined4 *)(iVar7 + 4);
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (puVar9[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar9);
    }
    puVar9 = puVar9 + 3;
  }
  if (uVar14 == 0) {
    return;
  }
  if (iVar7 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar5 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar13 = uVar14 - 0x10, uVar14 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar14 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar12 = *(int *)(iVar11 + 8) + 0x10;
  iVar10 = iVar13 * uVar5 + iVar13 + -4;
  iVar13 = iVar12 + iVar10;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar14 = *(uint *)(iVar13 + -4);
    if (uVar14 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar13 - iVar7) < uVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar11 + 0x14);
  uVar14 = 1 << uVar5;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar6 = *(uint *)(iVar11 + 0x10);
    uVar4 = *(uint *)(iVar11 + 0xc) | uVar6;
    if ((uVar14 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar6 == 0) || (uVar4 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar14 + uVar6;
      return;
    }
    puVar15 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar4 = *puVar15;
      if (uVar6 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar14 + uVar6;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar6 == uVar4) {
      return;
    }
  } while( true );
}

