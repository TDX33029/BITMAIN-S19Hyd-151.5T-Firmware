// FUN_014aa340 @ 014aa340 size=360 calls_out=3 calls_in=2
// strings: 

void FUN_014aa340(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar9 = (undefined4 *)param_1[0x69];
  iVar14 = param_1[0x68];
  pcVar5 = (code *)*puVar9;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(iVar14);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  FUN_0064ce10(param_1 + 0x34);
  piVar3 = (int *)param_1[0x6f];
  if (((uint)piVar3 & 1) == 0) {
    piVar4 = piVar3 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      if (*piVar3 != 0) {
        thunk_FUN_016d3fb4(piVar3[1]);
      }
      goto LAB_014aa3fc;
    }
  }
  else if (param_1[0x6e] + ((uint)piVar3 >> 5) != 0) {
    piVar3 = (int *)(param_1[0x6c] - ((uint)piVar3 >> 5));
LAB_014aa3fc:
    thunk_FUN_016d3fb4(piVar3);
  }
  FUN_0144c4f4(param_1 + 0x7c);
  if (param_1[0x7c] != 0) {
    thunk_FUN_016d3fb4(param_1[0x7d]);
  }
  piVar3 = (int *)param_1[0x85];
  if (((uint)piVar3 & 1) == 0) {
    piVar4 = piVar3 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar14 + -1;
    if (iVar14 != 1) goto LAB_0064cfa8;
    DataMemoryBarrier(0xb);
    if (*piVar3 != 0) {
      thunk_FUN_016d3fb4(piVar3[1]);
    }
  }
  else {
    if (param_1[0x84] + ((uint)piVar3 >> 5) == 0) goto LAB_0064cfa8;
    piVar3 = (int *)(param_1[0x82] - ((uint)piVar3 >> 5));
  }
  thunk_FUN_016d3fb4(piVar3);
LAB_0064cfa8:
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (*param_1 == 0 && param_1[1] == 0) {
    FUN_01015c1c(param_1 + 2);
  }
  else {
    FUN_01015c1c(param_1 + 2);
  }
  FUN_01404298(param_1 + 0x12);
  piVar3 = (int *)param_1[0x31];
  if (((uint)piVar3 & 1) == 0) {
    piVar4 = piVar3 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar14 + -1;
    if (iVar14 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    if (*piVar3 != 0) {
      thunk_FUN_016d3fb4(piVar3[1]);
    }
  }
  else {
    if (param_1[0x30] + ((uint)piVar3 >> 5) == 0) {
      return;
    }
    piVar3 = (int *)(param_1[0x2e] - ((uint)piVar3 >> 5));
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)piVar3 - 3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)piVar3 - 3) >> 5);
  iVar13 = *(int *)(iVar14 + 8) + 0x10;
  iVar11 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar6 - (int)piVar3) < uVar10) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)((int)piVar3 - 3) = 0xff;
  *(undefined2 *)((int)piVar3 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar14 + 0x10);
    uVar7 = *(uint *)(iVar14 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar14 + 0x10);
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

