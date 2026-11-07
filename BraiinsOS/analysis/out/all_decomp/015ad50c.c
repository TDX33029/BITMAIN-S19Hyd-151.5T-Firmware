// FUN_015ad50c @ 015ad50c size=252 calls_out=2 calls_in=3
// strings: 

void FUN_015ad50c(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint local_28;
  
  uVar6 = *param_1;
  if (uVar6 < 2) {
    return;
  }
  if (uVar6 == 2) {
    if (param_1[6] == 0) {
      return;
    }
    local_28 = param_1[5];
  }
  else if (uVar6 == 3) {
    uVar12 = param_1[4];
    local_28 = param_1[3];
    iVar8 = uVar12 + 1;
    uVar6 = local_28;
    while (iVar8 = iVar8 + -1, iVar8 != 0) {
      FUN_015ad50c(uVar6);
      uVar6 = uVar6 + 0x1c;
    }
    if (uVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = param_1[4];
    if (uVar6 == 0) {
      return;
    }
    local_28 = param_1[3];
    uVar12 = 0;
    do {
      piVar4 = (int *)(local_28 + uVar12 * 8);
      iVar14 = *piVar4;
      uVar12 = uVar12 + 1;
      iVar13 = piVar4[1];
      iVar11 = iVar13 + 1;
      iVar8 = iVar14;
      while (iVar11 = iVar11 + -1, iVar11 != 0) {
        FUN_015ad50c(iVar8);
        iVar8 = iVar8 + 0x1c;
      }
      if (iVar13 != 0) {
        thunk_FUN_016d3fb4(iVar14);
      }
    } while (uVar12 != uVar6);
  }
  uVar6 = local_28;
  if (local_28 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar12 = *(byte *)(uVar6 - 3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar11 = uVar9 - 0x10, uVar9 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(uVar6 - 3) >> 5);
  iVar14 = *(int *)(iVar8 + 8) + 0x10;
  iVar13 = iVar11 * uVar12 + iVar11 + -4;
  iVar11 = iVar14 + iVar13;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar11 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar11 - uVar6 < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar8 + 0x14);
  uVar9 = 1 << uVar12;
  *(undefined1 *)(uVar6 - 3) = 0xff;
  *(undefined2 *)(uVar6 - 2) = 0;
  do {
    uVar10 = *(uint *)(iVar8 + 0x10);
    uVar6 = *(uint *)(iVar8 + 0xc) | uVar10;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar8,uVar12);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar9 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar9 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

