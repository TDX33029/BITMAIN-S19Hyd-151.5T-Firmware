// FUN_015329e4 @ 015329e4 size=480 calls_out=4 calls_in=2
// strings: 

void FUN_015329e4(char *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((*param_1 == '\0') && ((*(uint *)(param_1 + 4) & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 8));
    iVar4 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4c);
  }
  if (iVar4 != -0x80000000) {
    piVar5 = *(int **)(param_1 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*(undefined4 *)(param_1 + 0x44));
    }
    puVar6 = *(undefined1 **)(param_1 + 0x50);
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 != 0) {
      puVar9 = puVar6;
      do {
        *puVar9 = 0;
        iVar4 = iVar4 + -1;
        puVar9 = puVar9 + 1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x4c);
    param_1[0x54] = '\0';
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0x57] = '\0';
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
    }
    piVar5 = *(int **)(param_1 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155ee24(*(undefined4 *)(param_1 + 0x48));
    }
    if (*(int *)(param_1 + 0x30) != -1) {
      piVar5 = (int *)(*(int *)(param_1 + 0x30) + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        uVar10 = *(uint *)(*(int *)(param_1 + 0x34) + 8);
        if (uVar10 < 5) {
          uVar10 = 4;
        }
        if ((*(int *)(*(int *)(param_1 + 0x34) + 4) + uVar10 + 7 & -uVar10) != 0) {
          thunk_FUN_016d3fb4();
        }
      }
    }
    if (*(int *)(param_1 + 0x38) != -1) {
      piVar5 = (int *)(*(int *)(param_1 + 0x38) + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        uVar10 = *(uint *)(*(int *)(param_1 + 0x3c) + 8);
        if (uVar10 < 5) {
          uVar10 = 4;
        }
        if ((*(int *)(*(int *)(param_1 + 0x3c) + 4) + uVar10 + 7 & -uVar10) != 0) {
          thunk_FUN_016d3fb4();
        }
      }
    }
  }
  FUN_0155ebac(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar10 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar11 = uVar14 - 0x10, uVar14 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar14 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar17 = *(int *)(iVar7 + 8) + 0x10;
  iVar15 = iVar11 * uVar10 + iVar11 + -4;
  iVar11 = iVar17 + iVar15;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar14 = *(uint *)(iVar11 + -4);
    if (uVar14 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar11 - iVar4) < uVar14) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar11 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar17 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar7 + 0x14);
  uVar14 = 1 << uVar10;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar16 = *(uint *)(iVar7 + 0x10);
    uVar12 = *(uint *)(iVar7 + 0xc) | uVar16;
    if ((uVar14 & uVar12) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar16 == 0) || (uVar12 + uVar14 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar10);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar14 + uVar16;
      return;
    }
    puVar18 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar12 = *puVar18;
      if (uVar16 != uVar12) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar1);
    *puVar18 = uVar14 + uVar16;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar16 == uVar12) {
      return;
    }
  } while( true );
}

