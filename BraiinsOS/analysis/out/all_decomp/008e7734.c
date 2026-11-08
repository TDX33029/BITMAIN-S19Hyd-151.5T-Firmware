// FUN_008e7734 @ 008e7734 size=320 calls_out=2 calls_in=15
// strings: 

void FUN_008e7734(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar14 = param_1[2];
  if (iVar14 != 0) {
    iVar16 = param_1[1];
    iVar11 = 0;
    do {
      puVar4 = (undefined4 *)(iVar16 + iVar11 * 8);
      piVar5 = (int *)*puVar4;
      iVar11 = iVar11 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*puVar4,puVar4[1]);
      }
    } while (iVar11 != iVar14);
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  piVar5 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[6],param_1[7]);
  }
  iVar16 = param_1[4];
  iVar14 = 0;
  iVar11 = param_1[5];
  while (iVar14 != iVar11) {
    piVar5 = (int *)(iVar16 + iVar14 * 8);
    iVar6 = *piVar5;
    iVar14 = iVar14 + 1;
    if (iVar6 != -1) {
      piVar7 = (int *)(iVar6 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        iVar6 = piVar5[1];
        uVar8 = *(uint *)(iVar6 + 8);
        if (uVar8 < 5) {
          uVar8 = 4;
        }
        if ((*(int *)(iVar6 + 4) + uVar8 + 7 & -uVar8) != 0) {
          thunk_FUN_016d3fb4();
        }
      }
    }
  }
  if (param_1[3] == 0) {
    return;
  }
  iVar14 = param_1[4];
  if (iVar14 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar8 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar16 = uVar12 - 0x10, uVar12 == 0)) {
    iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar12 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar15 = *(int *)(iVar11 + 8) + 0x10;
  iVar6 = iVar16 * uVar8 + iVar16 + -4;
  iVar16 = iVar15 + iVar6;
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
  if ((uint)(iVar16 - iVar14) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar11 + 0x14);
  uVar12 = 1 << uVar8;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar11 + 0x10);
    uVar9 = *(uint *)(iVar11 + 0xc) | uVar13;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar8);
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
      *(uint *)(iVar11 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

