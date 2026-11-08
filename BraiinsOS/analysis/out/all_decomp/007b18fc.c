// FUN_007b18fc @ 007b18fc size=320 calls_out=3 calls_in=1
// strings: 

void FUN_007b18fc(int param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar6 = *(int *)(param_1 + 0xc0);
  if (iVar6 != -0x80000000) {
    puVar13 = *(undefined4 **)(param_1 + 0x1bc);
    uVar10 = *(undefined4 *)(param_1 + 0x1b8);
    pcVar3 = (code *)*puVar13;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar10);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    FUN_007b1d04(param_1 + 0xe0);
    FUN_0110db34(param_1 + 0x188);
    puVar13 = *(undefined4 **)(param_1 + 0x1d0);
    uVar10 = *(undefined4 *)(param_1 + 0x1cc);
    pcVar3 = (code *)*puVar13;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar10);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    puVar13 = *(undefined4 **)(param_1 + 0x1dc);
    uVar10 = *(undefined4 *)(param_1 + 0x1d8);
    pcVar3 = (code *)*puVar13;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar10);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    if (iVar6 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc4));
    }
    if (*(int *)(param_1 + 0xcc) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd0));
    }
    iVar6 = *(int *)(param_1 + 0x1c4);
    puVar13 = (undefined4 *)(iVar6 + 4);
    for (iVar11 = *(int *)(param_1 + 0x1c8); iVar11 != 0; iVar11 = iVar11 + -1) {
      if (puVar13[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar13);
      }
      puVar13 = puVar13 + 3;
    }
    if (*(int *)(param_1 + 0x1c0) != 0) {
      thunk_FUN_016d3fb4(iVar6);
    }
  }
  if (*(int *)(param_1 + 0x3ac) == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x3b0);
  if (iVar6 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar4 = uVar7 - 0x10, uVar7 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar6 + -3) >> 5);
  iVar12 = *(int *)(iVar11 + 8) + 0x10;
  iVar8 = iVar4 * uVar14 + iVar4 + -4;
  iVar4 = iVar12 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar7 = *(uint *)(iVar4 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar4 - iVar6) < uVar7) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar4 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar12 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar11 + 0x14);
  uVar7 = 1 << uVar14;
  *(undefined1 *)(iVar6 + -3) = 0xff;
  *(undefined2 *)(iVar6 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar11 + 0x10);
    uVar5 = *(uint *)(iVar11 + 0xc) | uVar9;
    if ((uVar7 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar9 == 0) || (uVar5 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar15 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar5 = *puVar15;
      if (uVar9 != uVar5) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar5) {
      return;
    }
  } while( true );
}

