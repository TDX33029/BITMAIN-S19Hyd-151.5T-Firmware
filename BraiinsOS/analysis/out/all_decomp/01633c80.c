// FUN_01633c80 @ 01633c80 size=160 calls_out=2 calls_in=2
// strings: 

void FUN_01633c80(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uStack_28;
  
  iVar13 = param_1[1];
  if (iVar13 == 0) {
    return;
  }
  iVar14 = *param_1;
  iVar6 = 0;
  do {
    iVar10 = iVar6 + 1;
    puVar4 = (ushort *)(iVar14 + iVar6 * 0x14);
    if (1 < *puVar4) {
      if (*puVar4 == 2) {
        FUN_01633c80(puVar4 + 6);
      }
      else {
        iVar16 = *(int *)(puVar4 + 6);
        iVar17 = *(int *)(puVar4 + 8);
        iVar8 = iVar17 + 1;
        iVar6 = iVar16;
        while (iVar8 = iVar8 + -1, iVar8 != 0) {
          FUN_01633c80(iVar6);
          iVar6 = iVar6 + 8;
        }
        if (iVar17 != 0) {
          thunk_FUN_016d3fb4(iVar16);
        }
      }
    }
    iVar6 = iVar10;
  } while (iVar10 != iVar13);
  if (iVar14 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar6 = uVar11 - 0x10, uVar11 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar8 = *(int *)(iVar13 + 8) + 0x10;
  iVar10 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar8 + iVar10;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar6 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - iVar14) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar13 + 0x10);
    uVar7 = *(uint *)(iVar13 + 0xc) | uVar12;
    if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar18 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar7 = *puVar18;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar3);
    *puVar18 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

