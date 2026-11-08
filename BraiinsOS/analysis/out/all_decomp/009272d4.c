// FUN_009272d4 @ 009272d4 size=116 calls_out=1 calls_in=4
// strings: 

void FUN_009272d4(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar15 = (int *)param_1[1];
  uVar4 = param_1[3] - (int)piVar15;
  if (uVar4 != 0) {
    uVar14 = 0;
    do {
      uVar14 = uVar14 + 1;
      if (*piVar15 != -0x7fffffeb) {
        FUN_008f7448(piVar15);
        FUN_008f7448(piVar15 + 4);
      }
      piVar15 = piVar15 + 8;
    } while (uVar4 >> 5 != uVar14);
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar14 - 0x10, uVar14 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar14 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar13 = *(int *)(iVar6 + 8) + 0x10;
  iVar11 = iVar8 * uVar4 + iVar8 + -4;
  iVar8 = iVar13 + iVar11;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar14 = *(uint *)(iVar8 + -4);
    if (uVar14 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - iVar5) < uVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar14 = 1 << uVar4;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0xc) | uVar12;
    if ((uVar14 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar9 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar14 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar9 = *puVar16;
      if (uVar12 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar14 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

