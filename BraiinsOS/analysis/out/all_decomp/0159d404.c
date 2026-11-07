// FUN_0159d404 @ 0159d404 size=196 calls_out=2 calls_in=1
// strings: 

void FUN_0159d404(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  
  piVar15 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  iVar14 = piVar15[1];
  if (iVar14 != 0) {
    iVar16 = piVar15[3];
    if (iVar16 != 0) {
      puVar13 = (uint *)*piVar15;
      puVar17 = puVar13 + 1;
      uVar11 = ~*puVar13 & 0x80808080;
      do {
        puVar7 = puVar17;
        if (uVar11 == 0) {
          do {
            puVar17 = puVar7 + 1;
            uVar11 = *puVar7;
            puVar13 = puVar13 + -0xa0;
            puVar7 = puVar17;
          } while ((uVar11 & 0x80808080) == 0x80808080);
          uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
        }
        FUN_0159d700(puVar13 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                              (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) *
                               -0x28 + -3);
        iVar16 = iVar16 + -1;
        uVar11 = uVar11 - 1 & uVar11;
      } while (iVar16 != 0);
    }
    if (iVar14 * 0xa1 != -0xa5) {
      thunk_FUN_016d3fb4(*piVar15 + iVar14 * -0xa0 + -0xa0);
    }
  }
  if (piVar15 == (int *)0x0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar11 = *(byte *)((int)piVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar16 = uVar8 - 0x10, uVar8 == 0)) {
    iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar8 = (uint)(*(byte *)((int)piVar15 + -3) >> 5);
  iVar12 = *(int *)(iVar14 + 8) + 0x10;
  iVar9 = iVar16 * uVar11 + iVar16 + -4;
  iVar16 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar16 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar16 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar16 - (int)piVar15) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar16 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar8 = 1 << uVar11;
  *(undefined1 *)((int)piVar15 + -3) = 0xff;
  *(undefined2 *)((int)piVar15 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar14 + 0x10);
    uVar5 = *(uint *)(iVar14 + 0xc) | uVar10;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar11);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar4;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar4 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar17 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar5 = *puVar17;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

