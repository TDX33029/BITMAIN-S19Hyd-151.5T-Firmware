// FUN_0147d960 @ 0147d960 size=120 calls_out=2 calls_in=2
// strings: 

void FUN_0147d960(int *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 4 && param_1[1] == 0) {
    return;
  }
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_0146b7d0();
    return;
  }
  piVar6 = (int *)param_1[2];
  iVar8 = *piVar6;
  if (iVar8 != 0) {
    puVar13 = (undefined4 *)piVar6[1];
    pcVar3 = (code *)*puVar13;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar8);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
  }
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar14 = *(byte *)((int)piVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar4 = uVar9 - 0x10, uVar9 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)((int)piVar6 + -3) >> 5);
  iVar12 = *(int *)(iVar8 + 8) + 0x10;
  iVar10 = iVar4 * uVar14 + iVar4 + -4;
  iVar4 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar9 = *(uint *)(iVar4 + -4);
    if (uVar9 < 5) {
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
  if ((uint)(iVar4 - (int)piVar6) < uVar9) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar4 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar8 + 0x14);
  uVar9 = 1 << uVar14;
  *(undefined1 *)((int)piVar6 + -3) = 0xff;
  *(undefined2 *)((int)piVar6 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar8 + 0x10);
    uVar5 = *(uint *)(iVar8 + 0xc) | uVar11;
    if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar11 == 0) || (uVar5 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar8,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar5 = *puVar15;
      if (uVar11 != uVar5) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar5) {
      return;
    }
  } while( true );
}

