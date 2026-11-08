// FUN_01667d24 @ 01667d24 size=252 calls_out=2 calls_in=0
// strings: 

void FUN_01667d24(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int local_24;
  
  if (0 < *(int *)(param_1 + 0x48)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
  }
  if ((*(int *)(param_1 + 0x30) != -0x7ffffffd) && (0 < *(int *)(param_1 + 0x30))) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
  }
  if ((*(int *)(param_1 + 0x3c) != -0x7ffffffd) && (0 < *(int *)(param_1 + 0x3c))) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x40));
  }
  iVar4 = *(int *)(param_1 + 0x20);
  local_24 = unaff_r4;
  if ((iVar4 != 0) && (iVar6 = iVar4 * 4 + 4, iVar4 + iVar6 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_1 + 0x1c) - iVar6);
  }
  piVar12 = *(int **)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_01666b88(piVar12 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x01666ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01666ab4 + *(int *)(&DAT_01666ab4 + *piVar12 * 4)))();
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  if (piVar12 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar14 = *(byte *)((int)piVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)((int)piVar12 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - (int)piVar12) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar14;
  *(undefined1 *)((int)piVar12 + -3) = 0xff;
  *(undefined2 *)((int)piVar12 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (local_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar5;
      FUN_016d6ac4(uStack_28,local_24);
      *puVar5 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

