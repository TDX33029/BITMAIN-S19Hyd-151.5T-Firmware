// FUN_00ffd42c @ 00ffd42c size=132 calls_out=3 calls_in=1
// strings: 

void FUN_00ffd42c(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar9 = *(undefined4 *)(param_1 + 0xc0);
  puVar11 = *(undefined4 **)(param_1 + 0xc4);
  pcVar4 = (code *)*puVar11;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar9);
  }
  if (puVar11[1] != 0) {
    thunk_FUN_016d3fb4(uVar9);
  }
  iVar12 = *(int *)(param_1 + 0xd4) + 1;
  iVar3 = *(int *)(param_1 + 0xd0);
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_00ffce4c(iVar3);
    iVar3 = iVar3 + 0x40;
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd0));
  }
  if (*(int *)(param_1 + 0xb0) != 2) {
    FUN_00ffcea0(param_1);
  }
  if (param_1 == 0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar13 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar12 = uVar6 - 0x10, uVar6 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar6 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar10 = *(int *)(iVar3 + 8) + 0x10;
  iVar7 = iVar12 * uVar13 + iVar12 + -4;
  iVar12 = iVar10 + iVar7;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar6 = *(uint *)(iVar12 + -4);
    if (uVar6 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar12 - param_1) < uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar12 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar10 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar6 = 1 << uVar13;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar8 = *(uint *)(iVar3 + 0x10);
    uVar5 = *(uint *)(iVar3 + 0xc) | uVar8;
    if ((uVar6 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar8 == 0) || (uVar5 + uVar6 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar11;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar11 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar6 + uVar8;
      return;
    }
    puVar14 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar8 != uVar5) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar2);
    *puVar14 = uVar6 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar5) {
      return;
    }
  } while( true );
}

