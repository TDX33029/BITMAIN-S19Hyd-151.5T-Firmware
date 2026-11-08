// FUN_00f9c6ec @ 00f9c6ec size=500 calls_out=1 calls_in=0
// strings: 

void FUN_00f9c6ec(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 unaff_r4;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(uint *)(param_1 + 0xfc) & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0x108);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x100));
    uVar4 = *(uint *)(param_1 + 0x108);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0x28);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10c));
    uVar4 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar4 != 5) && (3 < uVar4)) {
    uVar12 = *(undefined4 *)(param_1 + 0x2c);
    puVar3 = *(undefined4 **)(param_1 + 0x30);
    pcVar6 = (code *)*puVar3;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar12);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x58));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x70));
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x7c));
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x88));
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x94));
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa0));
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb8));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc4));
  }
  iVar15 = *(int *)(param_1 + 0xd4);
  iVar16 = *(int *)(param_1 + 0xd0);
  if (iVar15 != 0) {
    puVar9 = (uint *)(iVar16 + 0x10);
    do {
      if ((*puVar9 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar9[1]);
      }
      puVar9 = puVar9 + 7;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    thunk_FUN_016d3fb4(iVar16);
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xdc));
  }
  uStack_20 = unaff_r4;
  if (*(int *)(param_1 + 0xe4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe8));
  }
  iVar15 = *(int *)(param_1 + 0xf8);
  if (iVar15 != 0) {
    iVar14 = *(int *)(param_1 + 0xf4);
    iVar16 = 0;
    do {
      iVar8 = iVar16 + 1;
      puVar3 = (undefined4 *)(iVar14 + iVar16 * 0x18);
      piVar5 = (int *)*puVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar16 + -1;
      if (iVar16 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*puVar3,puVar3[1]);
      }
      iVar16 = iVar8;
    } while (iVar8 != iVar15);
  }
  if (*(int *)(param_1 + 0xf0) == 0) {
    return;
  }
  iVar15 = *(int *)(param_1 + 0xf4);
  if (iVar15 == 0) {
    return;
  }
  uStack_1c = uStack_20;
  iVar16 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar10 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar13 = *(int *)(iVar16 + 8) + 0x10;
  iVar8 = iVar14 * uVar4 + iVar14 + -4;
  iVar14 = iVar13 + iVar8;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar10 = *(uint *)(iVar14 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar14 - iVar15) < uVar10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar13 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar16 + 0x14);
  uVar10 = 1 << uVar4;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar16 + 0x10);
    uVar7 = *(uint *)(iVar16 + 0xc) | uVar11;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar16,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar3 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar3;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar3 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar9 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar9);
      uVar7 = *puVar9;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar1);
    *puVar9 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

