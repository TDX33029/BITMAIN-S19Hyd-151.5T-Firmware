// FUN_00c5b124 @ 00c5b124 size=316 calls_out=1 calls_in=2
// strings: 

void FUN_00c5b124(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  short sVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  int *local_28;
  
  iVar7 = param_1[1];
  if (iVar7 == 0) {
    return;
  }
  iVar15 = param_1[3];
  local_28 = param_1;
  if (iVar15 != 0) {
    puVar17 = (uint *)*param_1;
    puVar19 = puVar17 + 1;
    uVar18 = ~*puVar17 & 0x80808080;
    do {
      puVar11 = puVar19;
      if (uVar18 == 0) {
        do {
          puVar19 = puVar11 + 1;
          uVar18 = *puVar11;
          puVar17 = puVar17 + -0xd8;
          puVar11 = puVar19;
        } while ((uVar18 & 0x80808080) == 0x80808080);
        uVar18 = uVar18 & 0x80808080 ^ 0x80808080;
      }
      sVar4 = (short)((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                    (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3);
      piVar5 = (int *)puVar17[-sVar4 * 0x36 + -0xe];
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_009ba06c(puVar17[-sVar4 * 0x36 + -0xe]);
        }
      }
      piVar5 = (int *)puVar17[-sVar4 * 0x36 + -4];
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_009ba06c(puVar17[-sVar4 * 0x36 + -4]);
        }
      }
      iVar15 = iVar15 + -1;
      uVar18 = uVar18 - 1 & uVar18;
    } while (iVar15 != 0);
  }
  if (iVar7 * 0xd9 == -0xdd) {
    return;
  }
  iVar7 = *local_28 + iVar7 * -0xd8;
  if (iVar7 + -0xd8 == 0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar18 = *(byte *)(iVar7 + -0xdb) & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar7 + -0xdb) >> 5);
  iVar16 = *(int *)(iVar15 + 8) + 0x10;
  iVar13 = iVar8 * uVar18 + iVar8 + -4;
  iVar8 = iVar16 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar8 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar8 - (iVar7 + -0xd8)) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar15 + 0x14);
  uVar12 = 1 << uVar18;
  *(undefined1 *)(iVar7 + -0xdb) = 0xff;
  *(undefined2 *)(iVar7 + -0xda) = 0;
  do {
    uVar14 = *(uint *)(iVar15 + 0x10);
    uVar9 = *(uint *)(iVar15 + 0xc) | uVar14;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar15,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar15 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar19 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar19);
      uVar9 = *puVar19;
      if (uVar14 != uVar9) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar19);
    } while (!bVar1);
    *puVar19 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar9) {
      return;
    }
  } while( true );
}

