// FUN_00715f70 @ 00715f70 size=208 calls_out=1 calls_in=2
// strings: 

void FUN_00715f70(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  psVar8 = (short *)*param_1;
  if (psVar8 == (short *)0x0) {
    return;
  }
  iVar4 = 0;
  if (*psVar8 != 0) {
    iVar4 = *(int *)(psVar8 + 2);
  }
  if (*psVar8 != 0 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(psVar8 + 4));
  }
  iVar4 = 0;
  if (psVar8[0x12] != 0) {
    iVar4 = *(int *)(psVar8 + 0x14);
  }
  if (psVar8[0x12] != 0 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(psVar8 + 0x16));
  }
  iVar4 = 0;
  if (psVar8[0x22] != 0) {
    iVar4 = *(int *)(psVar8 + 0x24);
  }
  if (psVar8[0x22] != 0 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(psVar8 + 0x26));
  }
  iVar4 = 0;
  if (psVar8[0x34] != 0) {
    iVar4 = *(int *)(psVar8 + 0x36);
  }
  if (psVar8[0x34] != 0 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(psVar8 + 0x38));
  }
  iVar4 = 0;
  if (psVar8[0x44] != 0) {
    iVar4 = *(int *)(psVar8 + 0x46);
  }
  if (psVar8[0x44] != 0 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(psVar8 + 0x48));
  }
  iVar4 = 0;
  if (psVar8[0x56] != 0) {
    iVar4 = *(int *)(psVar8 + 0x58);
  }
  if (psVar8[0x56] != 0 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(psVar8 + 0x5a));
  }
  if (psVar8 == (short *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar14 = *(byte *)((int)psVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)psVar8 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar6 - (int)psVar8) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)((int)psVar8 + -3) = 0xff;
  psVar8[-1] = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

