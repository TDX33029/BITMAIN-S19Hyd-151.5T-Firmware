// FUN_013d1d80 @ 013d1d80 size=204 calls_out=3 calls_in=3
// strings: 

void FUN_013d1d80(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar13 = *param_1;
  if (iVar13 == -0x80000000) {
    iVar13 = param_1[2];
    iVar10 = param_1[3] + 1;
    iVar5 = iVar13;
    while (iVar10 = iVar10 + -1, iVar10 != 0) {
      FUN_013e7690(iVar5);
      iVar5 = iVar5 + 8;
    }
    if (param_1[1] == 0) {
      return;
    }
  }
  else {
    iVar14 = param_1[1];
    iVar10 = param_1[2] + 1;
    iVar5 = iVar14;
    while (iVar10 = iVar10 + -1, iVar10 != 0) {
      FUN_013e7690(iVar5);
      iVar5 = iVar5 + 8;
    }
    if (iVar13 != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
    uVar4 = param_1[9];
    uVar7 = 1;
    if ((int)uVar4 < 0) {
      uVar7 = uVar4 ^ 0x80000000;
    }
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        iVar13 = 0x28;
      }
      else {
        uVar4 = param_1[10];
        iVar13 = 0x2c;
      }
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar13));
      }
    }
    iVar13 = param_1[0x14];
    FUN_013d6144(iVar13);
  }
  if (iVar13 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar10 = uVar7 - 0x10, uVar7 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar12 = *(int *)(iVar5 + 8) + 0x10;
  iVar14 = iVar10 * uVar4 + iVar10 + -4;
  iVar10 = iVar12 + iVar14;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar10 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar10 - iVar13) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar7 = 1 << uVar4;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar11;
    if ((uVar7 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar7 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar7 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

