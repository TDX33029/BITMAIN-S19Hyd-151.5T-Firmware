// FUN_00f24560 @ 00f24560 size=532 calls_out=3 calls_in=8
// strings: 

void FUN_00f24560(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 2 && param_1[1] == 0) {
LAB_00f245a8:
    if (param_1[0xb0] == -0x80000000 || param_1[0xb0] == 0) goto LAB_00f245b8;
LAB_00f24658:
    thunk_FUN_016d3fb4(param_1[0xb1]);
    iVar13 = param_1[0xb3];
  }
  else {
    if (param_1[6] == -0x80000000 || param_1[6] == 0) {
      if (param_1[9] == -0x80000000 || param_1[9] == 0) goto LAB_00f24598;
LAB_00f24628:
      thunk_FUN_016d3fb4(param_1[10]);
      if (param_1[0xc] == -0x80000000 || param_1[0xc] == 0) goto LAB_00f245a8;
    }
    else {
      thunk_FUN_016d3fb4(param_1[7]);
      if (param_1[9] != -0x80000000 && param_1[9] != 0) goto LAB_00f24628;
LAB_00f24598:
      if (param_1[0xc] == -0x80000000 || param_1[0xc] == 0) goto LAB_00f245a8;
    }
    thunk_FUN_016d3fb4(param_1[0xd]);
    if (param_1[0xb0] != -0x80000000 && param_1[0xb0] != 0) goto LAB_00f24658;
LAB_00f245b8:
    iVar13 = param_1[0xb3];
  }
  if (iVar13 != -0x80000000) {
    iVar8 = param_1[0xb4];
    iVar12 = param_1[0xb5];
    for (iVar11 = 0; iVar12 != iVar11; iVar11 = iVar11 + 1) {
      iVar4 = iVar8 + iVar11 * 0x20;
      if (*(int *)(iVar4 + 0x10) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x14));
      }
    }
    if (iVar13 != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
  }
  FUN_005c7b40(param_1 + 0x30);
  if (param_1[0x46] == 2 && param_1[0x47] == 0) goto LAB_00f246c8;
  if (param_1[0x5e] == -0x80000000 || param_1[0x5e] == 0) {
    if (param_1[0x68] == -0x80000000 || param_1[0x68] == 0) goto LAB_00f246a8;
LAB_00f24738:
    thunk_FUN_016d3fb4(param_1[0x69]);
    if (param_1[0x72] != -0x80000000 && param_1[0x72] != 0) goto LAB_00f24750;
LAB_00f246b8:
    if (param_1[0x7c] == -0x80000000 || param_1[0x7c] == 0) goto LAB_00f246c8;
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x5f]);
    if (param_1[0x68] != -0x80000000 && param_1[0x68] != 0) goto LAB_00f24738;
LAB_00f246a8:
    if (param_1[0x72] == -0x80000000 || param_1[0x72] == 0) goto LAB_00f246b8;
LAB_00f24750:
    thunk_FUN_016d3fb4(param_1[0x73]);
    if (param_1[0x7c] == -0x80000000 || param_1[0x7c] == 0) goto LAB_00f246c8;
  }
  thunk_FUN_016d3fb4(param_1[0x7d]);
LAB_00f246c8:
  iVar11 = param_1[0xab];
  iVar8 = param_1[0xac] + 1;
  iVar13 = iVar11;
  while (iVar8 = iVar8 + -1, iVar8 != 0) {
    FUN_00f24560(iVar13);
    iVar13 = iVar13 + 0x2e0;
  }
  if (param_1[0xaa] != 0) {
    thunk_FUN_016d3fb4(iVar11);
  }
  if (param_1[0xad] == 0) {
    return;
  }
  iVar13 = param_1[0xae];
  if (iVar13 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar11 = uVar9 - 0x10, uVar9 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar4 = *(int *)(iVar8 + 8) + 0x10;
  iVar12 = iVar11 * uVar14 + iVar11 + -4;
  iVar11 = iVar4 + iVar12;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar11 + -4);
    if (uVar9 < 5) {
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
  if ((uint)(iVar11 - iVar13) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar4 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar8 + 0x14);
  uVar9 = 1 << uVar14;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar8 + 0x10);
    uVar6 = *(uint *)(iVar8 + 0xc) | uVar10;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar8,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar9 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar9 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

