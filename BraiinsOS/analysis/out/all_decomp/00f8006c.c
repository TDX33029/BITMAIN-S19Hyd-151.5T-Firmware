// FUN_00f8006c @ 00f8006c size=904 calls_out=4 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00f8006c(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x7fffffff) == 0) {
    uVar3 = *(uint *)(param_1 + 0x98);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x90));
    uVar3 = *(uint *)(param_1 + 0x98);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    uVar3 = *(uint *)(param_1 + 0xa4);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9c));
    uVar3 = *(uint *)(param_1 + 0xa4);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    uVar3 = *(uint *)(param_1 + 0xb0);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
    uVar3 = *(uint *)(param_1 + 0xb0);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    uVar3 = *(uint *)(param_1 + 0xbc);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb4));
    uVar3 = *(uint *)(param_1 + 0xbc);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    uVar3 = *(uint *)(param_1 + 200);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
    uVar3 = *(uint *)(param_1 + 200);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    uVar3 = *(uint *)(param_1 + 0xd4);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc));
    uVar3 = *(uint *)(param_1 + 0xd4);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    uVar3 = *(uint *)(param_1 + 0xe0);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
    uVar3 = *(uint *)(param_1 + 0xe0);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    iVar4 = *(int *)(param_1 + 0x20);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    iVar4 = *(int *)(param_1 + 0x20);
  }
  if (iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
  }
  if ((*(uint *)(param_1 + 0xec) & 0x7fffffff) == 0) {
    uVar3 = *(uint *)(param_1 + 0xf8);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
    uVar3 = *(uint *)(param_1 + 0xf8);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    uVar3 = *(uint *)(param_1 + 0x104);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xfc));
    uVar3 = *(uint *)(param_1 + 0x104);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    uVar3 = *(uint *)(param_1 + 0x110);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x108));
    uVar3 = *(uint *)(param_1 + 0x110);
  }
  if ((uVar3 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x114));
  }
  FUN_00f7ff20(param_1 + 0x44);
  iVar15 = *(int *)(param_1 + 0x60);
  iVar13 = *(int *)(param_1 + 100) + 1;
  iVar4 = iVar15;
  while (iVar13 = iVar13 + -1, iVar13 != 0) {
    FUN_00f743bc(iVar4);
    iVar4 = iVar4 + 0x16c;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    thunk_FUN_016d3fb4(iVar15);
  }
  iVar13 = *(int *)(param_1 + 0x6c);
  iVar4 = 0;
  for (iVar15 = *(int *)(param_1 + 0x70); iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*(int *)(iVar13 - iVar4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((iVar13 - iVar4) + 4));
    }
    iVar8 = iVar13 - iVar4;
    if (*(int *)(iVar8 + 0xc) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0x10));
    }
    if (*(int *)(iVar8 + 0x18) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0x1c));
    }
    iVar4 = iVar4 + -0x30;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    thunk_FUN_016d3fb4(iVar13);
  }
  if ((*(uint *)(param_1 + 0x10) != 5) && (3 < *(uint *)(param_1 + 0x10))) {
    uVar11 = *(undefined4 *)(param_1 + 0x14);
    puVar14 = *(undefined4 **)(param_1 + 0x18);
    pcVar5 = (code *)*puVar14;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar11);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
  }
  iVar4 = *(int *)(param_1 + 0x88);
  if (iVar4 != 0) {
    iVar15 = *(int *)(param_1 + 0x84);
    iVar13 = 0;
    do {
      iVar8 = iVar13 + 1;
      puVar14 = (undefined4 *)(iVar15 + iVar13 * 0x18);
      piVar6 = (int *)*puVar14;
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*puVar14,puVar14[1]);
      }
      iVar13 = iVar8;
    } while (iVar8 != iVar4);
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x84);
  if (iVar4 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar3 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar15 = uVar9 - 0x10, uVar9 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar12 = *(int *)(iVar13 + 8) + 0x10;
  iVar8 = iVar15 * uVar3 + iVar15 + -4;
  iVar15 = iVar12 + iVar8;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar9 = *(uint *)(iVar15 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar15 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar15 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar12 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar9 = 1 << uVar3;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar13 + 0x10);
    uVar7 = *(uint *)(iVar13 + 0xc) | uVar10;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar10 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar14;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar14 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar9 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar10 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar9 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar7) {
      return;
    }
  } while( true );
}

