// FUN_00bcb384 @ 00bcb384 size=224 calls_out=4 calls_in=6
// strings: 

void FUN_00bcb384(int param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x41);
  if (cVar1 == '\x03') {
    FUN_00b216bc(param_1 + 0x48);
    return;
  }
  if (cVar1 == '\x04') {
    FUN_00bcc3cc(param_1 + 0x48);
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    FUN_00b221f4(param_1 + 0x60);
    if (*(char *)(param_1 + 0x48) == '\x03') {
      (**(code **)**(undefined4 **)(param_1 + 0x4c))();
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  iVar14 = *(int *)(param_1 + 0x34);
  if (iVar14 != 0) {
    iVar15 = *(int *)(param_1 + 0x30);
    iVar5 = 0;
    do {
      piVar7 = *(int **)(iVar15 + iVar5 * 4);
      iVar11 = iVar5 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(iVar15 + iVar5 * 4));
      }
      iVar5 = iVar11;
    } while (iVar11 != iVar14);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  iVar14 = *(int *)(param_1 + 0x30);
  if (iVar14 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar15 = uVar12 - 0x10, uVar12 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar8 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar15 * uVar16 + iVar15 + -4;
  iVar15 = iVar8 + iVar11;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar12 = *(uint *)(iVar15 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar15 - iVar14) < uVar12) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar15 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar8 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar5 + 0x14);
  uVar12 = 1 << uVar16;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar13;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar12 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar2);
    *puVar17 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

