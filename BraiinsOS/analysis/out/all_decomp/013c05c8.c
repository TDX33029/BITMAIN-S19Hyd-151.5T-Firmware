// FUN_013c05c8 @ 013c05c8 size=280 calls_out=4 calls_in=2
// strings: 

void FUN_013c05c8(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_013f5720();
  uVar4 = *param_1;
  if (uVar4 == 0x110008) {
    uVar4 = param_1[1];
    FUN_013c05c8(uVar4);
    thunk_FUN_016d3fb4(uVar4);
    uVar13 = param_1[2];
    FUN_013c05c8(uVar13);
  }
  else {
    iVar6 = 2;
    if (0x10ffff < uVar4) {
      iVar6 = uVar4 - 0x110000;
    }
    switch(iVar6) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      return;
    case 4:
      uVar13 = 2;
      uVar4 = param_1[1];
      if ((int)uVar4 < 0) {
        uVar13 = uVar4 ^ 0x80000000;
      }
      if (uVar13 == 0) {
        return;
      }
      if (uVar13 == 1) {
        uVar4 = param_1[2];
        iVar6 = 8;
      }
      else {
        if (uVar4 != 0) {
          thunk_FUN_016d3fb4(param_1[2]);
        }
        uVar4 = param_1[4];
        iVar6 = 0x10;
      }
      if (uVar4 == 0) {
        return;
      }
      uVar13 = *(uint *)((int)(param_1 + 1) + iVar6);
      break;
    case 6:
      uVar13 = param_1[1];
      FUN_013c05c8(uVar13);
      break;
    default:
      uVar13 = param_1[2];
      iVar6 = param_1[3] + 1;
      uVar4 = uVar13;
      while (iVar6 = iVar6 + -1, iVar6 != 0) {
        FUN_01362ab4(uVar4);
        uVar4 = uVar4 + 0x58;
      }
      if (param_1[1] == 0) {
        return;
      }
    }
  }
  if (uVar13 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar4 = *(byte *)(uVar13 - 3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(uVar13 - 3) >> 5);
  iVar12 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar7 * uVar4 + iVar7 + -4;
  iVar7 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar7 + -4);
    if (uVar9 < 5) {
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
  if (iVar7 - uVar13 < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar9 = 1 << uVar4;
  *(undefined1 *)(uVar13 - 3) = 0xff;
  *(undefined2 *)(uVar13 - 2) = 0;
  do {
    uVar11 = *(uint *)(iVar6 + 0x10);
    uVar13 = *(uint *)(iVar6 + 0xc) | uVar11;
    if ((uVar9 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar13 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar14 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar13 = *puVar14;
      if (uVar11 != uVar13) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar13) {
      return;
    }
  } while( true );
}

