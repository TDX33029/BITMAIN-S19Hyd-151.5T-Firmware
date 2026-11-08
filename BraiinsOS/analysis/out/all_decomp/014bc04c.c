// FUN_014bc04c @ 014bc04c size=324 calls_out=3 calls_in=4
// strings: 

void FUN_014bc04c(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0x270) == -0x7fffffd7) {
    puVar8 = *(undefined4 **)(param_1 + 0x278);
    uVar11 = *(undefined4 *)(param_1 + 0x274);
    pcVar4 = (code *)*puVar8;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar11);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
  }
  else {
    FUN_01465b84();
  }
  FUN_014bc46c(param_1);
  if (*(int *)(param_1 + 0x260) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x264));
  }
  if (*(int *)(param_1 + 0x2a0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2a4));
  }
  uVar6 = *(uint *)(param_1 + 0x2c4);
  iVar9 = 0;
  if (uVar6 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x2b8);
    uVar7 = *(uint *)(param_1 + 0x2c0);
    uVar3 = uVar7 - uVar5;
    if (uVar7 < uVar5) {
      uVar3 = uVar7;
    }
    if (uVar5 - uVar3 < uVar6) {
      iVar9 = uVar6 - (uVar5 - uVar3);
    }
    else {
      uVar5 = uVar3 + uVar6;
    }
  }
  iVar12 = *(int *)(param_1 + 700);
  puVar8 = (undefined4 *)(iVar12 + uVar3 * 0xc + 4);
  for (iVar14 = uVar5 - uVar3; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (puVar8[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar8);
    }
    puVar8 = puVar8 + 3;
  }
  puVar8 = (undefined4 *)(iVar12 + 4);
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (puVar8[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar8);
    }
    puVar8 = puVar8 + 3;
  }
  if (*(int *)(param_1 + 0x2b8) == 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 700);
  if (iVar9 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar6 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar3 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar14 = uVar3 - 0x10, uVar3 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar3 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar13 = *(int *)(iVar12 + 8) + 0x10;
  iVar10 = iVar14 * uVar6 + iVar14 + -4;
  iVar14 = iVar13 + iVar10;
  if (4 < uVar3) {
    if (uVar3 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar3 = *(uint *)(iVar14 + -4);
    if (uVar3 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar14 - iVar9) < uVar3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar14 - uVar3) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar12 + 0x14);
  uVar3 = 1 << uVar6;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar7 = *(uint *)(iVar12 + 0x10);
    uVar5 = *(uint *)(iVar12 + 0xc) | uVar7;
    if ((uVar3 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar7 == 0) || (uVar5 + uVar3 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar3 + uVar7;
      return;
    }
    puVar15 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar5 = *puVar15;
      if (uVar7 != uVar5) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar3 + uVar7;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar7 == uVar5) {
      return;
    }
  } while( true );
}

