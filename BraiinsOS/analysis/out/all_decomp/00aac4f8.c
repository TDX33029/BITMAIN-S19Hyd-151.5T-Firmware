// FUN_00aac4f8 @ 00aac4f8 size=188 calls_out=1 calls_in=16
// strings: 

void FUN_00aac4f8(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = *(uint *)(param_1 + 0xa8) + 0xc4653601;
  if (*(uint *)(param_1 + 0xa8) < 999999999) {
    uVar5 = 0;
  }
  if (1 < uVar5) {
    if (uVar5 == 2) {
      piVar6 = *(int **)(param_1 + 0xa0);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar7 + -1;
    }
    else {
      piVar6 = *(int **)(param_1 + 0xa0);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar7 + -1;
    }
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac5b4(*(undefined4 *)(param_1 + 0xa0));
    }
  }
  if (param_1 == -1) {
    return;
  }
  piVar6 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar7 + -1;
  if (iVar7 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar5 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar7 + 8) + 0x10;
  iVar12 = iVar8 * uVar5 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar8 - param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar7 + 0x14);
  uVar11 = 1 << uVar5;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar7 + 0x10);
    uVar9 = *(uint *)(iVar7 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar15 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar9 = *puVar15;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar1);
    *puVar15 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

