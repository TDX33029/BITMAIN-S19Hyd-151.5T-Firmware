// FUN_016584b4 @ 016584b4 size=256 calls_out=1 calls_in=3
// strings: 

void FUN_016584b4(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    puVar7 = (uint *)(iVar4 + 0x18);
    uVar8 = *(uint *)(iVar4 + 0x18);
    do {
      while( true ) {
        uVar12 = uVar8;
        if ((uVar12 & 4) != 0) goto LAB_0165853c;
        uVar8 = *puVar7;
        if (uVar8 == uVar12) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar7);
      if (bVar1) {
        *puVar7 = uVar12 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
    if ((uVar12 & 1) != 0) {
      (**(code **)(*(int *)(iVar4 + 0x10) + 8))(*(undefined4 *)(iVar4 + 0x14));
    }
LAB_0165853c:
    piVar5 = *(int **)(param_1 + 8);
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0165863c(*(undefined4 *)(param_1 + 8));
      }
    }
  }
  if (param_1 == -1) {
    return;
  }
  piVar5 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar8 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar13 = iVar9 * uVar8 + iVar9 + -4;
  iVar9 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar9 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar9 - param_1) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar12 = 1 << uVar8;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar4 + 0x10);
    uVar10 = *(uint *)(iVar4 + 0xc) | uVar14;
    if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar8);
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
      *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar7 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar7);
      uVar10 = *puVar7;
      if (uVar14 != uVar10) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar10) {
      return;
    }
  } while( true );
}

