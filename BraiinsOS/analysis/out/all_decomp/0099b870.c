// FUN_0099b870 @ 0099b870 size=176 calls_out=1 calls_in=0
// strings: 

void FUN_0099b870(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int unaff_r4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  
  iVar12 = param_1[1];
  iVar11 = param_1[2];
  iVar7 = 0;
  while (iVar7 != iVar11) {
    piVar10 = (int *)(iVar12 + iVar7 * 0x18);
    if (*piVar10 != 0) {
      thunk_FUN_016d3fb4(piVar10[1]);
    }
    iVar14 = piVar10[4];
    iVar7 = iVar7 + 1;
    puVar5 = (undefined4 *)(iVar14 + 4);
    for (iVar15 = piVar10[5]; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (puVar5[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar5);
      }
      puVar5 = puVar5 + 3;
    }
    if (piVar10[3] != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
  }
  if (*param_1 == 0) {
    return;
  }
  if (iVar12 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar13 = *(byte *)(iVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar11 = uVar8 - 0x10, uVar8 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(iVar12 + -3) >> 5);
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
  if ((uint)(iVar11 - iVar12) < uVar8) {
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
  *(undefined1 *)(iVar12 + -3) = 0xff;
  *(undefined2 *)(iVar12 + -2) = 0;
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
      FUN_016d3ca8(&uStack_28,iVar7,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar5;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar5 = uVar6;
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

