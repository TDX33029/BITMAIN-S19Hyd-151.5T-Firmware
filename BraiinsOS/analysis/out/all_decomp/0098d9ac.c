// FUN_0098d9ac @ 0098d9ac size=224 calls_out=0 calls_in=1
// strings: 

void FUN_0098d9ac(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar6 = *param_1;
  uVar7 = 3;
  if ((int)uVar6 < 0) {
    uVar7 = uVar6 ^ 0x80000000;
  }
  if (uVar7 == 2) {
    puVar10 = (undefined1 *)param_1[2];
    uVar6 = param_1[3];
    if (uVar6 != 0) {
      do {
        *puVar10 = 0;
        uVar6 = uVar6 - 1;
        puVar10 = puVar10 + 1;
      } while (uVar6 != 0);
      puVar10 = (undefined1 *)param_1[2];
    }
    uVar6 = param_1[1];
    puVar16 = param_1 + 1;
    param_1[3] = 0;
    if (uVar6 == 0) {
      uVar6 = *puVar16;
      goto joined_r0x0098da84;
    }
    do {
      *puVar10 = 0;
      uVar6 = uVar6 - 1;
      puVar10 = puVar10 + 1;
    } while (uVar6 != 0);
  }
  else {
    if (uVar7 != 3) {
      return;
    }
    uVar7 = param_1[2];
    puVar10 = (undefined1 *)param_1[1];
    if (uVar7 != 0) {
      puVar8 = puVar10;
      do {
        *puVar8 = 0;
        uVar7 = uVar7 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar7 != 0);
      uVar6 = *param_1;
    }
    param_1[2] = 0;
    for (; puVar16 = param_1, uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
  }
  uVar6 = *puVar16;
joined_r0x0098da84:
  if (uVar6 == 0) {
    return;
  }
  uVar6 = puVar16[1];
  if (uVar6 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar7 = *(byte *)(uVar6 - 3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(uVar6 - 3) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar13 = iVar9 * uVar7 + iVar9 + -4;
  iVar9 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar9 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar9 - uVar6 < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar12 = 1 << uVar7;
  *(undefined1 *)(uVar6 - 3) = 0xff;
  *(undefined2 *)(uVar6 - 2) = 0;
  do {
    uVar14 = *(uint *)(iVar4 + 0x10);
    uVar6 = *(uint *)(iVar4 + 0xc) | uVar14;
    if ((uVar12 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar14 == 0) || (uVar6 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar7);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar14 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar6) {
      return;
    }
  } while( true );
}

