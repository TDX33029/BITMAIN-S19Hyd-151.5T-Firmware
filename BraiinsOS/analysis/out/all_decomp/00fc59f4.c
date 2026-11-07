// FUN_00fc59f4 @ 00fc59f4 size=296 calls_out=2 calls_in=4
// strings: 

void FUN_00fc59f4(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  uVar5 = 0x11;
  if ((int)uVar4 < 0) {
    uVar5 = uVar4 ^ 0x80000000;
  }
  switch(uVar5) {
  case 0:
  case 4:
  case 10:
  case 0xb:
    goto switchD_00fc5a1c_caseD_0;
  case 1:
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
    if (param_1[1] == 0) {
      return;
    }
    uVar4 = param_1[2];
    goto LAB_014b47f4;
  case 5:
    uVar4 = param_1[2];
    puVar11 = (undefined4 *)(uVar4 + 4);
    for (uVar5 = param_1[3]; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (puVar11[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar11);
      }
      puVar11 = puVar11 + 3;
    }
    break;
  case 0xe:
    uVar4 = param_1[2];
    iVar13 = param_1[3] + 1;
    uVar5 = uVar4;
    while (iVar13 = iVar13 + -1, iVar13 != 0) {
      FUN_00fc59f4(uVar5);
      uVar5 = uVar5 + 0x20;
    }
    break;
  case 0xf:
    uVar4 = param_1[2];
    iVar13 = param_1[3] + 1;
    uVar5 = uVar4;
    while (iVar13 = iVar13 + -1, iVar13 != 0) {
      FUN_00fc59f4(uVar5);
      uVar5 = uVar5 + 0x20;
    }
    break;
  case 0x10:
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    uVar4 = param_1[4];
    FUN_00fc59f4(uVar4);
    goto LAB_014b47f4;
  default:
    if (uVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[3] == 0) {
      return;
    }
    uVar4 = param_1[4];
    goto LAB_014b47f4;
  }
  if (param_1[1] == 0) {
switchD_00fc5a1c_caseD_0:
    return;
  }
LAB_014b47f4:
  if (uVar4 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar5 = *(byte *)(uVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(uVar4 - 3) >> 5);
  iVar12 = *(int *)(iVar13 + 8) + 0x10;
  iVar9 = iVar6 * uVar5 + iVar6 + -4;
  iVar6 = iVar12 + iVar9;
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
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar8 = 1 << uVar5;
  *(undefined1 *)(uVar4 - 3) = 0xff;
  *(undefined2 *)(uVar4 - 2) = 0;
  do {
    uVar10 = *(uint *)(iVar13 + 0x10);
    uVar4 = *(uint *)(iVar13 + 0xc) | uVar10;
    if ((uVar8 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar4 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar11;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar11 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar14 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar4 = *puVar14;
      if (uVar10 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar4) {
      return;
    }
  } while( true );
}

