// FUN_00f333d0 @ 00f333d0 size=380 calls_out=1 calls_in=1
// strings: 

void FUN_00f333d0(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    puVar7 = (undefined1 *)*param_1;
    do {
      *puVar7 = 0;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar4 != 0);
  }
  iVar4 = param_1[3];
  if (iVar4 != 0) {
    puVar7 = (undefined1 *)param_1[2];
    do {
      *puVar7 = 0;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar4 != 0);
  }
  if ((undefined1 *)param_1[4] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)param_1[4];
    for (iVar4 = param_1[5]; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    iVar4 = param_1[4];
    iVar6 = param_1[5];
    param_1[4] = 0;
    if ((iVar4 != 0) && (iVar6 != 0)) {
      iVar8 = 0;
      do {
        *(undefined1 *)(iVar4 + iVar8) = 0;
        iVar8 = iVar8 + 1;
      } while (iVar6 != iVar8);
      thunk_FUN_016d3fb4();
    }
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    puVar7 = (undefined1 *)*param_1;
    do {
      *puVar7 = 0;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar4 != 0);
  }
  if (param_1[1] != 0) {
    thunk_FUN_016d3fb4(*param_1);
  }
  iVar4 = param_1[3];
  if (iVar4 != 0) {
    puVar7 = (undefined1 *)param_1[2];
    do {
      *puVar7 = 0;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar4 != 0);
  }
  if (param_1[3] != 0) {
    thunk_FUN_016d3fb4(param_1[2]);
  }
  if ((undefined1 *)param_1[4] == (undefined1 *)0x0) {
    return;
  }
  puVar7 = (undefined1 *)param_1[4];
  for (iVar4 = param_1[5]; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (param_1[5] == 0) {
    return;
  }
  iVar4 = param_1[4];
  if (iVar4 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar14 = *(int *)(iVar6 + 8) + 0x10;
  iVar12 = iVar8 * uVar15 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - iVar4) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar9 = *puVar16;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

