// FUN_011644f8 @ 011644f8 size=476 calls_out=5 calls_in=2
// strings: 

void FUN_011644f8(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar4 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[6],param_1[7]);
  }
  piVar4 = (int *)param_1[0xc];
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(param_1[0xc]);
    }
  }
  piVar4 = (int *)param_1[8];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[8],param_1[9]);
  }
  piVar4 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[10],param_1[0xb]);
  }
  piVar4 = (int *)param_1[0xd];
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(param_1[0xd]);
    }
  }
  piVar4 = (int *)param_1[0xe];
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(param_1[0xe]);
    }
  }
  iVar5 = param_1[1];
  puVar8 = (undefined4 *)(iVar5 + 0x10);
  for (iVar13 = param_1[2]; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (puVar8[-4] != 0) {
      thunk_FUN_016d3fb4(puVar8[-3]);
    }
    if (puVar8[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar8);
    }
    puVar8 = puVar8 + 6;
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  iVar14 = param_1[4];
  iVar13 = param_1[5] + 1;
  iVar5 = iVar14;
  while (iVar13 = iVar13 + -1, iVar13 != 0) {
    FUN_01158ce0(iVar5);
    iVar5 = iVar5 + 0x40;
  }
  if (param_1[3] == 0) {
    return;
  }
  if (iVar14 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar13 = uVar9 - 0x10, uVar9 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar12 = *(int *)(iVar5 + 8) + 0x10;
  iVar10 = iVar13 * uVar15 + iVar13 + -4;
  iVar13 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar9 = *(uint *)(iVar13 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar13 - iVar14) < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar5 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar5 + 0x10);
    uVar6 = *(uint *)(iVar5 + 0xc) | uVar11;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar15);
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
      *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar11 != uVar6) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar6) {
      return;
    }
  } while( true );
}

