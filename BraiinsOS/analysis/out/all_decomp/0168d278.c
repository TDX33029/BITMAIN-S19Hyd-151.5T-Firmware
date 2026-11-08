// FUN_0168d278 @ 0168d278 size=308 calls_out=1 calls_in=1
// strings: 

void FUN_0168d278(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar15 = param_1[1];
  iVar4 = param_1[3];
  iVar12 = 0;
  while (iVar12 != ((uint)(iVar4 - iVar15) >> 3) * -0x55555555) {
    piVar6 = (int *)(iVar15 + iVar12 * 0x18);
    puVar8 = (undefined4 *)(piVar6[1] + 0x40);
    for (iVar13 = piVar6[2]; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (puVar8[-0x10] != 0) {
        thunk_FUN_016d3fb4(puVar8[-0xf]);
      }
      if ((puVar8[-0xd] != -0x7ffffffd) && (0 < (int)puVar8[-0xd])) {
        thunk_FUN_016d3fb4(puVar8[-0xc]);
      }
      if ((puVar8[-10] != -0x7ffffffd) && (0 < (int)puVar8[-10])) {
        thunk_FUN_016d3fb4(puVar8[-9]);
      }
      if ((puVar8[-7] != -0x7ffffffd) && (0 < (int)puVar8[-7])) {
        thunk_FUN_016d3fb4(puVar8[-6]);
      }
      if ((puVar8[-4] != -0x7ffffffd) && (0 < (int)puVar8[-4])) {
        thunk_FUN_016d3fb4(puVar8[-3]);
      }
      if ((puVar8[-1] != -0x7ffffffd) && (0 < (int)puVar8[-1])) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 0x12;
    }
    iVar12 = iVar12 + 1;
    if (*piVar6 != 0) {
      thunk_FUN_016d3fb4(piVar6[1]);
    }
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar4 = *param_1;
  if (iVar4 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar15 = uVar9 - 0x10, uVar9 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar11 = *(int *)(iVar12 + 8) + 0x10;
  iVar13 = iVar15 * uVar14 + iVar15 + -4;
  iVar15 = iVar11 + iVar13;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar15 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar15 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar12 + 0x14);
  uVar9 = 1 << uVar14;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar12 + 0x10);
    uVar5 = *(uint *)(iVar12 + 0xc) | uVar10;
    if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar9 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar5 = *puVar16;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar9 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

