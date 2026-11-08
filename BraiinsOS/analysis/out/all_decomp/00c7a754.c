// FUN_00c7a754 @ 00c7a754 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_00c7a754(int param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 != 0) {
    puVar12 = *(undefined4 **)(param_1 + 0x2c);
    pcVar3 = (code *)*puVar12;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar7);
    }
    if (puVar12[1] != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
  }
  if (param_1 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar13 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar4 = uVar8 - 0x10, uVar8 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar11 = *(int *)(iVar7 + 8) + 0x10;
  iVar9 = iVar4 * uVar13 + iVar4 + -4;
  iVar4 = iVar11 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar8 = *(uint *)(iVar4 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar4 - param_1) < uVar8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar4 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar7 + 0x14);
  uVar8 = 1 << uVar13;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar7 + 0x10);
    uVar5 = *(uint *)(iVar7 + 0xc) | uVar10;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar12;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar12 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar14 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar2);
    *puVar14 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

