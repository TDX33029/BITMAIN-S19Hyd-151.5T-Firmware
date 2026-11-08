// FUN_010982a8 @ 010982a8 size=280 calls_out=2 calls_in=1
// strings: 

void FUN_010982a8(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  int *local_28;
  
  iVar6 = param_1[1];
  if (iVar6 == 0) {
    return;
  }
  iVar13 = param_1[3];
  local_28 = param_1;
  if (iVar13 != 0) {
    puVar15 = (uint *)*param_1;
    puVar17 = puVar15 + 1;
    uVar16 = ~*puVar15 & 0x80808080;
    do {
      puVar10 = puVar17;
      if (uVar16 == 0) {
        do {
          puVar17 = puVar10 + 1;
          uVar16 = *puVar10;
          puVar15 = puVar15 + -0x118;
          puVar10 = puVar17;
        } while ((uVar16 & 0x80808080) == 0x80808080);
        uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
      }
      sVar3 = (short)((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                    (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3);
      bVar18 = (short)puVar15[-sVar3 * 0x46 + -0x46] != 0;
      uVar4 = 0;
      if (bVar18) {
        uVar4 = puVar15[-sVar3 * 0x46 + -0x45];
      }
      if (bVar18 && uVar4 != 0) {
        thunk_FUN_016d3fb4(puVar15[-sVar3 * 0x46 + -0x44]);
      }
      bVar18 = (short)puVar15[-sVar3 * 0x46 + -0x3d] != 0;
      uVar4 = 0;
      if (bVar18) {
        uVar4 = puVar15[-sVar3 * 0x46 + -0x3c];
      }
      if (bVar18 && uVar4 != 0) {
        thunk_FUN_016d3fb4(puVar15[-sVar3 * 0x46 + -0x3b]);
      }
      FUN_010983c0(puVar15 + -sVar3 * 0x46 + -0x34);
      iVar13 = iVar13 + -1;
      uVar16 = uVar16 - 1 & uVar16;
    } while (iVar13 != 0);
  }
  if (iVar6 * 0x119 == -0x11d) {
    return;
  }
  iVar6 = *local_28 + iVar6 * -0x118;
  if (iVar6 + -0x118 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar6 + -0x11b) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar4 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar7 = uVar4 - 0x10, uVar4 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar4 = (uint)(*(byte *)(iVar6 + -0x11b) >> 5);
  iVar14 = *(int *)(iVar13 + 8) + 0x10;
  iVar11 = iVar7 * uVar16 + iVar7 + -4;
  iVar7 = iVar14 + iVar11;
  if (4 < uVar4) {
    if (uVar4 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(iVar7 + -4);
    if (uVar4 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - (iVar6 + -0x118)) < uVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar4 = 1 << uVar16;
  *(undefined1 *)(iVar6 + -0x11b) = 0xff;
  *(undefined2 *)(iVar6 + -0x11a) = 0;
  do {
    uVar12 = *(uint *)(iVar13 + 0x10);
    uVar8 = *(uint *)(iVar13 + 0xc) | uVar12;
    if ((uVar4 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar13,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar4 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar4 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

