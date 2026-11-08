// FUN_00d98314 @ 00d98314 size=108 calls_out=2 calls_in=2
// strings: 

void FUN_00d98314(int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
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
  
  if (param_2 != 0) {
    iVar12 = param_2 * 0x18;
    iVar10 = param_1;
    do {
      FUN_00f33d14(iVar10);
      iVar10 = iVar10 + 0x18;
      iVar12 = iVar12 + -0x18;
    } while (iVar12 != 0);
  }
  iVar10 = param_2 + 1;
  iVar12 = param_1;
  while (iVar10 = iVar10 + -1, iVar10 != 0) {
    FUN_00d983b4(iVar12);
    iVar12 = iVar12 + 0x18;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar13 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar10 = uVar7 - 0x10, uVar7 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar7 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar11 = *(int *)(iVar12 + 8) + 0x10;
  iVar8 = iVar10 * uVar13 + iVar10 + -4;
  iVar10 = iVar11 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar10 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar10 - param_1) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar12 + 0x14);
  uVar7 = 1 << uVar13;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar12 + 0x10);
    uVar5 = *(uint *)(iVar12 + 0xc) | uVar9;
    if ((uVar7 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar5 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar14 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar9 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar5) {
      return;
    }
  } while( true );
}

