// FUN_00f4ce00 @ 00f4ce00 size=252 calls_out=2 calls_in=4
// strings: 

void FUN_00f4ce00(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar10 = *param_1;
  uVar4 = 0x15;
  if ((int)uVar10 < 0) {
    uVar4 = uVar10 ^ 0x80000000;
  }
  switch(uVar4) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x12:
    goto switchD_00f4ce28_caseD_0;
  case 0xc:
    if (param_1[1] == 0) {
      return;
    }
    uVar4 = param_1[2];
    break;
  case 0xe:
    if (param_1[1] == 0) {
      return;
    }
    uVar4 = param_1[2];
    break;
  case 0x11:
    uVar4 = param_1[1];
    FUN_00f4ce00(uVar4);
    break;
  case 0x13:
    uVar4 = param_1[1];
    FUN_00f4ce00(uVar4);
    break;
  case 0x14:
    uVar4 = param_1[2];
    iVar12 = param_1[3] + 1;
    uVar10 = uVar4;
    while (iVar12 = iVar12 + -1, iVar12 != 0) {
      FUN_00f5401c(uVar10);
      uVar10 = uVar10 + 0x10;
    }
    uVar10 = param_1[1];
    goto joined_r0x00f4cf48;
  default:
    uVar4 = param_1[1];
    uVar14 = param_1[2];
    uVar8 = uVar4;
    for (uVar13 = 0; uVar14 != uVar13; uVar13 = uVar13 + 1) {
      FUN_00f5401c(uVar8);
      FUN_00f5401c(uVar8 + 0x10);
      uVar8 = uVar8 + 0x20;
    }
joined_r0x00f4cf48:
    if (uVar10 == 0) {
switchD_00f4ce28_caseD_0:
      return;
    }
  }
  if (uVar4 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar10 = *(byte *)(uVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(uVar4 - 3) >> 5);
  iVar11 = *(int *)(iVar12 + 8) + 0x10;
  iVar9 = iVar6 * uVar10 + iVar6 + -4;
  iVar6 = iVar11 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar6 + -4);
    if (uVar8 < 5) {
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
  if (iVar6 - uVar4 < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar12 + 0x14);
  uVar8 = 1 << uVar10;
  *(undefined1 *)(uVar4 - 3) = 0xff;
  *(undefined2 *)(uVar4 - 2) = 0;
  do {
    uVar13 = *(uint *)(iVar12 + 0x10);
    uVar4 = *(uint *)(iVar12 + 0xc) | uVar13;
    if ((uVar8 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar4 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar10);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar8 + uVar13;
      return;
    }
    puVar15 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar4 = *puVar15;
      if (uVar13 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar8 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar4) {
      return;
    }
  } while( true );
}

