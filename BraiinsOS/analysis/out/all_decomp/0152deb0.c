// FUN_0152deb0 @ 0152deb0 size=216 calls_out=1 calls_in=1
// strings: 

void FUN_0152deb0(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar8 = *param_1;
  uVar4 = 4;
  if ((int)uVar8 < 0) {
    uVar4 = uVar8 ^ 0x80000000;
  }
  if (uVar4 == 4) {
    if (((char)param_1[3] == '\0') && ((param_1[4] & 0x7fffffff) != 0)) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    uVar4 = param_1[1];
    puVar9 = (undefined4 *)(uVar4 + 4);
    for (uVar13 = param_1[2]; uVar13 != 0; uVar13 = uVar13 - 1) {
      if (puVar9[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar9);
      }
      puVar9 = puVar9 + 3;
    }
  }
  else {
    if (uVar4 != 0x1b) {
      return;
    }
    uVar4 = param_1[5];
    puVar9 = (undefined4 *)(uVar4 + 4);
    for (uVar8 = param_1[6]; uVar8 != 0; uVar8 = uVar8 - 1) {
      if (puVar9[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar9);
      }
      puVar9 = puVar9 + 3;
    }
    uVar8 = param_1[4];
  }
  if (uVar8 == 0) {
    return;
  }
  if (uVar4 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar8 = *(byte *)(uVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar13 - 0x10, uVar13 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(uVar4 - 3) >> 5);
  iVar12 = *(int *)(iVar5 + 8) + 0x10;
  iVar10 = iVar6 * uVar8 + iVar6 + -4;
  iVar6 = iVar12 + iVar10;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar13 = *(uint *)(iVar6 + -4);
    if (uVar13 < 5) {
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
  if (iVar6 - uVar4 < uVar13) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar13) != '\0') {
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
  uVar13 = 1 << uVar8;
  *(undefined1 *)(uVar4 - 3) = 0xff;
  *(undefined2 *)(uVar4 - 2) = 0;
  do {
    uVar11 = *(uint *)(iVar5 + 0x10);
    uVar4 = *(uint *)(iVar5 + 0xc) | uVar11;
    if ((uVar13 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar4 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar8);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar13 + uVar11;
      return;
    }
    puVar14 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar4 = *puVar14;
      if (uVar11 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar13 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar4) {
      return;
    }
  } while( true );
}

