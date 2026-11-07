// FUN_007a7ef4 @ 007a7ef4 size=164 calls_out=2 calls_in=0
// strings: 

void FUN_007a7ef4(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
  uVar3 = *(uint *)(param_1 + 0x1c);
  uVar5 = 8;
  if ((int)uVar3 < 0) {
    uVar5 = uVar3 ^ 0x80000000;
  }
  if (7 < uVar5) {
    if (uVar5 == 8) {
      if (uVar3 == 0) goto LAB_014b47f4;
      puVar9 = *(undefined4 **)(param_1 + 0x20);
    }
    else {
      if (*(char *)(param_1 + 0x20) != '\x03') goto LAB_014b47f4;
      puVar9 = *(undefined4 **)(param_1 + 0x24);
      uVar13 = *puVar9;
      puVar14 = (undefined4 *)puVar9[1];
      pcVar6 = (code *)*puVar14;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar13);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
    }
    thunk_FUN_016d3fb4(puVar9);
  }
LAB_014b47f4:
  if (param_1 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar3 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar5 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar5 - 0x10, uVar5 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar5 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar7 * uVar3 + iVar7 + -4;
  iVar7 = iVar12 + iVar10;
  if (4 < uVar5) {
    if (uVar5 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar5 = *(uint *)(iVar7 + -4);
    if (uVar5 < 5) {
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
  if ((uint)(iVar7 - param_1) < uVar5) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar5) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar1 = *(byte *)(iVar4 + 0x14);
  uVar5 = 1 << uVar3;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar5 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar5 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar5 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar5 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

