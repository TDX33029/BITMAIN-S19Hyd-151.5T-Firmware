// FUN_00b21fcc @ 00b21fcc size=328 calls_out=6 calls_in=2
// strings: 

void FUN_00b21fcc(int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
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
    if (*(char *)(param_1 + 0x60) == '\x04') {
      if (*(char *)(param_1 + 0x7c) == '\x03') {
        uVar12 = *(undefined4 *)(param_1 + 0x70);
        puVar14 = *(undefined4 **)(param_1 + 0x74);
        pcVar5 = (code *)*puVar14;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar12);
        }
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(uVar12);
        }
      }
      FUN_00c822ec(*(undefined4 *)(param_1 + 0x5c));
    }
    else if ((*(char *)(param_1 + 0x60) == '\x03') && (*(int *)(param_1 + 0x68) != 0)) {
      FUN_00c8204c(*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),1);
    }
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
  iVar13 = *(int *)(param_1 + 0x34);
  if (iVar13 != 0) {
    iVar15 = *(int *)(param_1 + 0x30);
    iVar4 = 0;
    do {
      piVar6 = *(int **)(iVar15 + iVar4 * 4);
      iVar9 = iVar4 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(iVar15 + iVar4 * 4));
      }
      iVar4 = iVar9;
    } while (iVar9 != iVar13);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  iVar13 = *(int *)(param_1 + 0x30);
  if (iVar13 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar15 = uVar10 - 0x10, uVar10 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar7 = *(int *)(iVar4 + 8) + 0x10;
  iVar9 = iVar15 * uVar16 + iVar15 + -4;
  iVar15 = iVar7 + iVar9;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar10 = *(uint *)(iVar15 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar15 - iVar13) < uVar10) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar15 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar7 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar14;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar14 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar2);
    *puVar17 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

