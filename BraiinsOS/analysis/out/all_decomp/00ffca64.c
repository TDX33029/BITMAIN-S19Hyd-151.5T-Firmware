// FUN_00ffca64 @ 00ffca64 size=228 calls_out=3 calls_in=3
// strings: 

void FUN_00ffca64(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = 2;
  if (0x10 < *param_1 >> 0x10) {
    iVar4 = *param_1 - 0x110000;
  }
  switch(iVar4) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    return;
  case 4:
    uVar13 = 2;
    puVar14 = param_1 + 1;
    uVar5 = *puVar14;
    if ((int)uVar5 < 0) {
      uVar13 = uVar5 ^ 0x80000000;
    }
    if (uVar13 == 0) {
      return;
    }
    iVar4 = 4;
    if (uVar13 != 1) {
      iVar4 = 0xc;
    }
    if (uVar13 != 1 && uVar5 != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
      iVar6 = *(int *)((int)puVar14 + iVar4);
    }
    else {
      iVar6 = *(int *)((int)puVar14 + iVar4);
    }
    if (iVar6 == 0) {
      return;
    }
    uVar13 = *(uint *)((int)puVar14 + iVar4 + 4);
    break;
  case 6:
    uVar13 = param_1[1];
    FUN_00ffc6e0(uVar13);
    break;
  default:
    uVar13 = param_1[2];
    iVar4 = param_1[3] + 1;
    uVar5 = uVar13;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_00ffca64(uVar5);
      uVar5 = uVar5 + 0x58;
    }
    if (param_1[1] == 0) {
      return;
    }
  }
  if (uVar13 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar5 = *(byte *)(uVar13 - 3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(uVar13 - 3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar6 * uVar5 + iVar6 + -4;
  iVar6 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
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
  if (iVar6 - uVar13 < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar5;
  *(undefined1 *)(uVar13 - 3) = 0xff;
  *(undefined2 *)(uVar13 - 2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar13 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar9 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar13 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar14 = (uint *)(iVar4 + 0x10);
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

