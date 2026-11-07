// FUN_009a09a4 @ 009a09a4 size=212 calls_out=3 calls_in=1
// strings: 

void FUN_009a09a4(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_009a08bc();
  piVar4 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  iVar16 = *(int *)(param_1 + 0x10);
  iVar7 = 0;
  iVar15 = *(int *)(param_1 + 0x14);
  while (iVar7 != iVar15) {
    piVar4 = (int *)(iVar16 + iVar7 * 8);
    iVar5 = *piVar4;
    iVar7 = iVar7 + 1;
    if (iVar5 != -1) {
      piVar8 = (int *)(iVar5 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        iVar5 = piVar4[1];
        uVar9 = *(uint *)(iVar5 + 8);
        if (uVar9 < 5) {
          uVar9 = 4;
        }
        if ((*(int *)(iVar5 + 4) + uVar9 + 7 & -uVar9) != 0) {
          thunk_FUN_016d3fb4();
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar9 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar16 = uVar12 - 0x10, uVar12 == 0)) {
    iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar12 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar14 = *(int *)(iVar15 + 8) + 0x10;
  iVar5 = iVar16 * uVar9 + iVar16 + -4;
  iVar16 = iVar14 + iVar5;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar16 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar16 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar16 - iVar7) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar5) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar15 + 0x14);
  uVar12 = 1 << uVar9;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar15 + 0x10);
    uVar10 = *(uint *)(iVar15 + 0xc) | uVar13;
    if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar10 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar15,uVar9);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar15 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar10 = *puVar17;
      if (uVar13 != uVar10) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar10) {
      return;
    }
  } while( true );
}

