// FUN_00d8e1c0 @ 00d8e1c0 size=828 calls_out=11 calls_in=3
// strings: 

void FUN_00d8e1c0(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x440) != '\0') {
    if (*(char *)(param_1 + 0x440) != '\x03') {
      return;
    }
    FUN_00d8e998(param_1 + 0x34c);
    puVar13 = (undefined4 *)(*(int *)(param_1 + 0x344) + 4);
    for (iVar9 = *(int *)(param_1 + 0x348); iVar9 != 0; iVar9 = iVar9 + -1) {
      if (puVar13[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar13);
      }
      puVar13 = puVar13 + 3;
    }
    if (*(int *)(param_1 + 0x340) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x344));
    }
    *(undefined4 *)(param_1 + 0x441) = 0;
    if (*(int *)(param_1 + 0x308) == -0x80000000 || *(int *)(param_1 + 0x308) == 0) {
      if (*(int *)(param_1 + 0x314) != -0x80000000 && *(int *)(param_1 + 0x314) != 0)
      goto LAB_00d8e4cc;
LAB_00d8e3f8:
      if (*(int *)(param_1 + 800) != -0x80000000 && *(int *)(param_1 + 800) != 0) goto LAB_00d8e4e4;
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30c));
      if (*(int *)(param_1 + 0x314) == -0x80000000 || *(int *)(param_1 + 0x314) == 0)
      goto LAB_00d8e3f8;
LAB_00d8e4cc:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x318));
      if (*(int *)(param_1 + 800) != -0x80000000 && *(int *)(param_1 + 800) != 0) {
LAB_00d8e4e4:
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x324));
        iVar9 = *(int *)(param_1 + 0x238);
        goto joined_r0x00d8e4f4;
      }
    }
    iVar9 = *(int *)(param_1 + 0x238);
joined_r0x00d8e4f4:
    if (iVar9 != 0) {
      FUN_00e98334(param_1 + 0x23c);
    }
    piVar4 = *(int **)(param_1 + 0x1a8);
    *(undefined1 *)(param_1 + 0x445) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
      return;
    }
    return;
  }
  piVar4 = *(int **)(param_1 + 0x180);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
  }
  if (*(int *)(param_1 + 0x158) == -0x80000000 || *(int *)(param_1 + 0x158) == 0) {
    if (*(int *)(param_1 + 0x164) != -0x80000000 && *(int *)(param_1 + 0x164) != 0)
    goto LAB_00d8e490;
LAB_00d8e270:
    if (*(int *)(param_1 + 0x170) == -0x80000000 || *(int *)(param_1 + 0x170) == 0)
    goto LAB_00d8e280;
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x15c));
    if (*(int *)(param_1 + 0x164) == -0x80000000 || *(int *)(param_1 + 0x164) == 0)
    goto LAB_00d8e270;
LAB_00d8e490:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
    if (*(int *)(param_1 + 0x170) == -0x80000000 || *(int *)(param_1 + 0x170) == 0)
    goto LAB_00d8e280;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x174));
LAB_00d8e280:
  FUN_00d81034(param_1);
  piVar4 = *(int **)(param_1 + 0x33c);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(*(undefined4 *)(param_1 + 0x33c));
  }
  piVar4 = *(int **)(param_1 + 0x18c);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa7b14(*(undefined4 *)(param_1 + 0x18c));
    }
  }
  piVar4 = *(int **)(param_1 + 0x188);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(*(undefined4 *)(param_1 + 0x188));
  }
  FUN_005c5160(param_1 + 400);
  iVar9 = *(int *)(param_1 + 0x1a0);
  piVar4 = (int *)(iVar9 + 0xfc);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    FUN_0163b708(iVar9 + 0xe8);
  }
  piVar4 = *(int **)(param_1 + 0x1a0);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(*(undefined4 *)(param_1 + 0x1a0));
  }
  puVar13 = (undefined4 *)(*(int *)(param_1 + 0x334) + 4);
  for (iVar9 = *(int *)(param_1 + 0x338); iVar9 != 0; iVar9 = iVar9 + -1) {
    if (puVar13[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar13);
    }
    puVar13 = puVar13 + 3;
  }
  if (*(int *)(param_1 + 0x330) == 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x334);
  if (iVar9 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar6 - iVar9) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar7 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

