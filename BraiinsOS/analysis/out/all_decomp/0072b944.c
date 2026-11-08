// FUN_0072b944 @ 0072b944 size=216 calls_out=4 calls_in=1
// strings: 

void FUN_0072b944(int param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x67);
  if (cVar1 == '\x03') {
    if ((*(uint *)(param_1 + 0x80) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
    }
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_0072ba94(param_1 + 0x70);
    }
    *(undefined1 *)(param_1 + 0x65) = 0;
    if ((*(char *)(param_1 + 100) != '\0') && (*(undefined1 **)(param_1 + 0x78) != &DAT_3b9aca00)) {
      if (*(char *)(param_1 + 0x84) == '\0') {
        FUN_012ba508(param_1 + 0x70);
      }
      piVar5 = *(int **)(param_1 + 0x80);
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_012c1110(*(undefined4 *)(param_1 + 0x80));
      }
    }
    *(undefined1 *)(param_1 + 0x66) = 0;
    *(undefined1 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x20);
  if (iVar8 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar15 = *(int *)(iVar6 + 8) + 0x10;
  iVar13 = iVar9 * uVar16 + iVar9 + -4;
  iVar9 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar12 = *(uint *)(iVar9 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar9 - iVar8) < uVar12) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar6 + 0x14);
  uVar12 = 1 << uVar16;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar6 + 0x10);
    uVar10 = *(uint *)(iVar6 + 0xc) | uVar14;
    if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar17 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar10 = *puVar17;
      if (uVar14 != uVar10) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar2);
    *puVar17 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar10) {
      return;
    }
  } while( true );
}

