// FUN_00f2a888 @ 00f2a888 size=196 calls_out=1 calls_in=0
// strings: 

void FUN_00f2a888(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int unaff_r4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  int *local_28;
  
  iVar10 = param_1[1];
  iVar11 = param_1[2];
  iVar7 = 0;
  local_28 = param_1;
  while (iVar7 != iVar11) {
    piVar5 = (int *)(iVar7 * 0x34 + iVar10);
    iVar14 = piVar5[1];
    puVar12 = (undefined4 *)(iVar14 + 4);
    for (iVar15 = piVar5[2]; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (puVar12[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar12);
      }
      puVar12 = puVar12 + 3;
    }
    if (*piVar5 != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
    if (piVar5[3] != 0) {
      thunk_FUN_016d3fb4(piVar5[4]);
    }
    iVar7 = iVar7 + 1;
    if (piVar5[6] != 0) {
      thunk_FUN_016d3fb4(piVar5[7]);
    }
  }
  if (*local_28 == 0) {
    return;
  }
  if (iVar10 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar13 = *(byte *)(iVar10 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar11 = uVar8 - 0x10, uVar8 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(iVar10 + -3) >> 5);
  iVar15 = *(int *)(iVar7 + 8) + 0x10;
  iVar14 = iVar11 * uVar13 + iVar11 + -4;
  iVar11 = iVar15 + iVar14;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar11 + -4);
    if (uVar8 < 5) {
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
  if ((uint)(iVar11 - iVar10) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar7 + 0x14);
  uVar8 = 1 << uVar13;
  *(undefined1 *)(iVar10 + -3) = 0xff;
  *(undefined2 *)(iVar10 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar7 + 0x10);
    uVar4 = *(uint *)(iVar7 + 0xc) | uVar9;
    if ((uVar8 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar4 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar7,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar12;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar12 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar8 + uVar9;
      return;
    }
    puVar16 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar4 = *puVar16;
      if (uVar9 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar8 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar4) {
      return;
    }
  } while( true );
}

