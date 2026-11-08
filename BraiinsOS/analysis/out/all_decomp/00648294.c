// FUN_00648294 @ 00648294 size=248 calls_out=1 calls_in=0
// strings: 

void FUN_00648294(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  
  uVar13 = param_1[3];
  uVar16 = *param_1;
  if (uVar13 != 0) {
    uVar5 = param_1[2];
    uVar14 = param_1[1];
    uVar4 = uVar16;
    if (uVar5 < uVar16) {
      uVar4 = 0;
    }
    iVar6 = uVar5 - uVar4;
    uVar15 = uVar16 - iVar6;
    iVar11 = uVar13 - uVar15;
    if (uVar13 < uVar15) {
      iVar11 = 0;
    }
    uVar7 = uVar16;
    if (uVar13 <= uVar15) {
      uVar7 = iVar6 + uVar13;
    }
    iVar6 = uVar7 - iVar6;
    if (iVar6 != 0) {
      puVar8 = (undefined4 *)(uVar14 + uVar5 * 0x20 + uVar4 * -0x20 + 4);
      do {
        if ((puVar8[-1] == 1) && (puVar8[1] != 0)) {
          thunk_FUN_016d3fb4(*puVar8);
        }
        puVar8 = puVar8 + 8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (uVar15 < uVar13) {
      puVar8 = (undefined4 *)(uVar14 + 4);
      do {
        if ((puVar8[-1] == 1) && (puVar8[1] != 0)) {
          thunk_FUN_016d3fb4(*puVar8);
        }
        puVar8 = puVar8 + 8;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  if (uVar16 == 0) {
    return;
  }
  uVar13 = param_1[1];
  if (uVar13 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar16 = *(byte *)(uVar13 - 3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar4 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar11 = uVar4 - 0x10, uVar4 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar4 = (uint)(*(byte *)(uVar13 - 3) >> 5);
  iVar12 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar11 * uVar16 + iVar11 + -4;
  iVar11 = iVar12 + iVar10;
  if (4 < uVar4) {
    if (uVar4 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(iVar11 + -4);
    if (uVar4 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar11 - uVar13 < uVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar4 = 1 << uVar16;
  *(undefined1 *)(uVar13 - 3) = 0xff;
  *(undefined2 *)(uVar13 - 2) = 0;
  do {
    uVar5 = *(uint *)(iVar6 + 0x10);
    uVar13 = *(uint *)(iVar6 + 0xc) | uVar5;
    if ((uVar4 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar5 == 0) || (uVar13 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar8;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar8 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar4 + uVar5;
      return;
    }
    puVar17 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar13 = *puVar17;
      if (uVar5 != uVar13) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar4 + uVar5;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar5 == uVar13) {
      return;
    }
  } while( true );
}

