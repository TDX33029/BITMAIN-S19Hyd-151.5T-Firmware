// FUN_00ef22e0 @ 00ef22e0 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_00ef22e0(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar11 = param_1[1];
  iVar7 = iVar11;
  for (iVar13 = param_1[2]; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*(int *)(iVar7 + 0x138) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 0x13c));
    }
    if (*(int *)(iVar7 + 0x144) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 0x148));
    }
    FUN_00f249a0(iVar7);
    iVar7 = iVar7 + 0x168;
  }
  if (*param_1 == 0) {
    return;
  }
  if (iVar11 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar11 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar13 = uVar8 - 0x10, uVar8 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(iVar11 + -3) >> 5);
  iVar12 = *(int *)(iVar7 + 8) + 0x10;
  iVar9 = iVar13 * uVar14 + iVar13 + -4;
  iVar13 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar13 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar13 - iVar11) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar7 + 0x14);
  uVar8 = 1 << uVar14;
  *(undefined1 *)(iVar11 + -3) = 0xff;
  *(undefined2 *)(iVar11 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar7 + 0x10);
    uVar5 = *(uint *)(iVar7 + 0xc) | uVar10;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar14);
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
      *(uint *)(iVar7 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar5 = *puVar15;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

