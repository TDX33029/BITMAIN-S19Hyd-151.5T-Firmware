// FUN_0099fa64 @ 0099fa64 size=332 calls_out=2 calls_in=1
// strings: 

void FUN_0099fa64(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 != 0) {
    puVar11 = *(undefined4 **)(param_1 + 0x14);
    pcVar4 = (code *)*puVar11;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar9);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
  }
  if ((*(uint *)(param_1 + 0x4c) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
  }
  iVar13 = *(int *)(param_1 + 0x2c);
  iVar12 = *(int *)(param_1 + 0x30) + 1;
  iVar9 = iVar13;
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_0099fd8c(iVar9);
    iVar9 = iVar9 + 0x20;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    thunk_FUN_016d3fb4(iVar13);
  }
  iVar9 = *(int *)(param_1 + 0x38);
  puVar11 = (undefined4 *)(iVar9 + 4);
  for (iVar12 = *(int *)(param_1 + 0x3c); iVar12 != 0; iVar12 = iVar12 + -1) {
    if (puVar11[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar11);
    }
    puVar11 = puVar11 + 3;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  iVar12 = *(int *)(param_1 + 0x44);
  iVar13 = *(int *)(param_1 + 0x48);
  iVar9 = 0;
  if (iVar13 != 0) {
    do {
      while (iVar3 = iVar12 + iVar9 * 0x20, *(int *)(iVar3 + 8) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0xc));
        iVar9 = iVar9 + 1;
        if (iVar13 == iVar9) goto LAB_0099fb80;
      }
      iVar9 = iVar9 + 1;
    } while (iVar13 != iVar9);
  }
LAB_0099fb80:
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(iVar12);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 100);
  if (iVar9 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar13 = uVar7 - 0x10, uVar7 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar7 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar10 = *(int *)(iVar12 + 8) + 0x10;
  iVar3 = iVar13 * uVar14 + iVar13 + -4;
  iVar13 = iVar10 + iVar3;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar7 = *(uint *)(iVar13 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar13 - iVar9) < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar13 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar10 + iVar3) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar12 + 0x14);
  uVar7 = 1 << uVar14;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar8 = *(uint *)(iVar12 + 0x10);
    uVar5 = *(uint *)(iVar12 + 0xc) | uVar8;
    if ((uVar7 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar8 == 0) || (uVar5 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar11;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar11 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar7 + uVar8;
      return;
    }
    puVar15 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar5 = *puVar15;
      if (uVar8 != uVar5) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar7 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar5) {
      return;
    }
  } while( true );
}

