// FUN_00c44ec8 @ 00c44ec8 size=356 calls_out=2 calls_in=7
// strings: 

void FUN_00c44ec8(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar14 = *param_1;
  if (iVar14 == 0) {
    return;
  }
  iVar15 = param_1[2];
  uVar6 = param_1[1];
  iVar8 = iVar14;
  if (iVar15 == 0) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      iVar8 = *(int *)(iVar8 + 0x168);
    }
  }
  else {
    iVar8 = 0;
    iVar13 = iVar14;
LAB_00c44f0c:
    do {
      if (iVar8 == 0) {
        uVar11 = 0;
        iVar8 = iVar13;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          iVar8 = *(int *)(iVar8 + 0x168);
        }
        iVar13 = 0;
        if (*(short *)(iVar8 + 0x166) != 0) goto LAB_00c44f2c;
LAB_00c44f5c:
        do {
          iVar9 = *(int *)(iVar8 + 0x160);
          if (iVar9 == 0) {
            thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af358);
          }
          uVar11 = (uint)*(ushort *)(iVar8 + 0x164);
          thunk_FUN_016d3fb4();
          iVar13 = iVar13 + 1;
          iVar8 = iVar9;
        } while (*(ushort *)(iVar9 + 0x166) <= uVar11);
      }
      else {
        uVar11 = uVar6;
        if (*(ushort *)(iVar8 + 0x166) <= uVar6) goto LAB_00c44f5c;
LAB_00c44f2c:
      }
      if (iVar13 == 0) {
        uVar6 = uVar11 + 1;
        iVar15 = iVar15 + -1;
        iVar13 = 0;
        if (iVar15 == 0) break;
        goto LAB_00c44f0c;
      }
      piVar4 = (int *)(iVar8 + uVar11 * 4 + 0x16c);
      do {
        iVar8 = *piVar4;
        iVar13 = iVar13 + -1;
        piVar4 = (int *)(iVar8 + 0x168);
      } while (iVar13 != 0);
      uVar6 = 0;
      iVar15 = iVar15 + -1;
      iVar13 = 0;
    } while (iVar15 != 0);
    if (iVar14 == 0) {
      return;
    }
  }
  iVar14 = *(int *)(iVar8 + 0x160);
  iVar15 = iVar8;
  if (*(int *)(iVar8 + 0x160) != 0) {
    do {
      iVar8 = iVar14;
      thunk_FUN_016d3fb4(iVar15);
      iVar14 = *(int *)(iVar8 + 0x160);
      iVar15 = iVar8;
    } while (*(int *)(iVar8 + 0x160) != 0);
  }
  if (iVar8 == 0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar6 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar15 = uVar11 - 0x10, uVar11 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar9 = *(int *)(iVar14 + 8) + 0x10;
  iVar13 = iVar15 * uVar6 + iVar15 + -4;
  iVar15 = iVar9 + iVar13;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar15 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar15 - iVar8) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar11 = 1 << uVar6;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar14 + 0x10);
    uVar7 = *(uint *)(iVar14 + 0xc) | uVar12;
    if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

