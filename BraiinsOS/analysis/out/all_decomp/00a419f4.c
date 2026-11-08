// FUN_00a419f4 @ 00a419f4 size=156 calls_out=2 calls_in=0
// strings: 

void FUN_00a419f4(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00a954c0(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
  }
  if ((*(uint *)(param_1 + 0x40) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
  iVar10 = *(int *)(param_1 + 0x38);
  puVar6 = (undefined4 *)(iVar10 + 4);
  for (iVar12 = *(int *)(param_1 + 0x3c); iVar12 != 0; iVar12 = iVar12 + -1) {
    if (puVar6[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar6);
    }
    puVar6 = puVar6 + 3;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_016d3fb4(iVar10);
  }
  if (param_1 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar13 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar12 = uVar7 - 0x10, uVar7 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar7 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar11 = *(int *)(iVar10 + 8) + 0x10;
  iVar8 = iVar12 * uVar13 + iVar12 + -4;
  iVar12 = iVar11 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar12 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar12 - param_1) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar10 + 0x14);
  uVar7 = 1 << uVar13;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar10 + 0x10);
    uVar4 = *(uint *)(iVar10 + 0xc) | uVar9;
    if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar4 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar10,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar14 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar4 = *puVar14;
      if (uVar9 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar4) {
      return;
    }
  } while( true );
}

