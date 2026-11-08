// FUN_013fc820 @ 013fc820 size=116 calls_out=3 calls_in=2
// strings: 

void FUN_013fc820(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar14 = param_1[1];
  uVar4 = param_1[3] - iVar14;
  if (uVar4 != 0) {
    uVar13 = 0;
    do {
      uVar13 = uVar13 + 1;
      FUN_013e0514(iVar14);
      FUN_013fc8fc(iVar14);
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar14 + 0x18));
      iVar14 = iVar14 + 0x1c;
    } while (uVar4 / 0x1c != uVar13);
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar14 = *param_1;
  if (iVar14 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar13 - 0x10, uVar13 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar12 = *(int *)(iVar5 + 8) + 0x10;
  iVar10 = iVar7 * uVar4 + iVar7 + -4;
  iVar7 = iVar12 + iVar10;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar13 = *(uint *)(iVar7 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - iVar14) < uVar13) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar13 = 1 << uVar4;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar11;
    if ((uVar13 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar13 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar13 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

