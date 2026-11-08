// FUN_0108a1d8 @ 0108a1d8 size=172 calls_out=1 calls_in=2
// strings: 

void FUN_0108a1d8(int param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != -0x80000000) {
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar7 != 0) {
      piVar11 = (int *)(*(int *)(param_1 + 0xc) + 8);
      do {
        bVar15 = (char)piVar11[-1] != '\0';
        iVar3 = 0;
        if (bVar15) {
          iVar3 = *piVar11;
        }
        if (bVar15 && iVar3 != 0) {
          thunk_FUN_016d3fb4(piVar11[1]);
        }
        piVar11 = piVar11 + 6;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar3 = *(int *)(param_1 + 8);
    }
    if (iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
    }
  }
  if (param_1 == -1) {
    return;
  }
  piVar11 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar11;
    bVar15 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar15);
  *piVar11 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1 == 0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar13 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar7 = uVar8 - 0x10, uVar8 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar12 = *(int *)(iVar3 + 8) + 0x10;
  iVar9 = iVar7 * uVar13 + iVar7 + -4;
  iVar7 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar7 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - param_1) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar3 + 0x14);
  uVar8 = 1 << uVar13;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar3 + 0x10);
    uVar5 = *(uint *)(iVar3 + 0xc) | uVar10;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar14 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

