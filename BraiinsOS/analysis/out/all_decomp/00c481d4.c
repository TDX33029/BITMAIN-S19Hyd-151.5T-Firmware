// FUN_00c481d4 @ 00c481d4 size=344 calls_out=2 calls_in=5
// strings: 

void FUN_00c481d4(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar15 = *param_1;
  if (iVar15 == 0) {
    return;
  }
  uVar12 = param_1[1];
  iVar14 = param_1[2];
  iVar7 = iVar15;
  if (iVar14 == 0) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      iVar7 = *(int *)(iVar7 + 0x8c);
    }
  }
  else {
    iVar7 = 0;
    iVar13 = iVar15;
LAB_00c4820c:
    do {
      if (iVar7 == 0) {
        uVar10 = 0;
        iVar7 = iVar13;
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          iVar7 = *(int *)(iVar7 + 0x8c);
        }
        iVar13 = 0;
        if (*(short *)(iVar7 + 0x8a) != 0) goto LAB_00c4822c;
LAB_00c4825c:
        do {
          iVar8 = *(int *)(iVar7 + 0x58);
          if (iVar8 == 0) {
            thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af358);
          }
          uVar10 = (uint)*(ushort *)(iVar7 + 0x88);
          thunk_FUN_016d3fb4();
          iVar13 = iVar13 + 1;
          iVar7 = iVar8;
        } while (*(ushort *)(iVar8 + 0x8a) <= uVar10);
      }
      else {
        uVar10 = uVar12;
        if (*(ushort *)(iVar7 + 0x8a) <= uVar12) goto LAB_00c4825c;
LAB_00c4822c:
      }
      if (iVar13 == 0) {
        uVar12 = uVar10 + 1;
        iVar14 = iVar14 + -1;
        iVar13 = 0;
        if (iVar14 == 0) break;
        goto LAB_00c4820c;
      }
      piVar4 = (int *)(iVar7 + uVar10 * 4 + 0x90);
      do {
        iVar7 = *piVar4;
        iVar13 = iVar13 + -1;
        piVar4 = (int *)(iVar7 + 0x8c);
      } while (iVar13 != 0);
      uVar12 = 0;
      iVar14 = iVar14 + -1;
      iVar13 = 0;
    } while (iVar14 != 0);
    if (iVar15 == 0) {
      return;
    }
  }
  iVar15 = *(int *)(iVar7 + 0x58);
  iVar14 = iVar7;
  if (*(int *)(iVar7 + 0x58) != 0) {
    do {
      iVar7 = iVar15;
      thunk_FUN_016d3fb4(iVar14);
      iVar15 = *(int *)(iVar7 + 0x58);
      iVar14 = iVar7;
    } while (*(int *)(iVar7 + 0x58) != 0);
  }
  if (iVar7 == 0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar12 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar10 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar8 = *(int *)(iVar15 + 8) + 0x10;
  iVar13 = iVar14 * uVar12 + iVar14 + -4;
  iVar14 = iVar8 + iVar13;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar14 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar14 - iVar7) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar15 + 0x14);
  uVar10 = 1 << uVar12;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar15 + 0x10);
    uVar6 = *(uint *)(iVar15 + 0xc) | uVar11;
    if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar6 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar15,uVar12);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar15 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar11 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar6) {
      return;
    }
  } while( true );
}

