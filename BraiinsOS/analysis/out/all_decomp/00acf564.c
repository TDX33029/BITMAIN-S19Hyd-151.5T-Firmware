// FUN_00acf564 @ 00acf564 size=260 calls_out=4 calls_in=2
// strings: 

void FUN_00acf564(int param_1)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int unaff_r6;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar4 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01659344(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    bVar1 = *(int *)(param_1 + 0x30) == 0;
    bVar3 = *(int *)(param_1 + 0x34) == 0;
    bVar17 = bVar1 && bVar3;
    if (!bVar1 || !bVar3) {
      unaff_r6 = *(int *)(param_1 + 0x38);
      bVar17 = unaff_r6 == 0;
    }
    if (!bVar17) {
      puVar10 = *(undefined4 **)(param_1 + 0x3c);
      pcVar6 = (code *)*puVar10;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(unaff_r6);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r6);
      }
    }
  }
  else if (*(int *)(param_1 + 0x28) == 0) {
    FUN_00acf714((int *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x34e8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x34e8) + 0xc))(*(undefined4 *)(param_1 + 0x34ec));
  }
  piVar4 = *(int **)(param_1 + 0x34f0);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x34f0),*(undefined4 *)(param_1 + 0x34f4));
    }
  }
  if (param_1 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar12 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar7 - param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar13;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar10;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar10 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

