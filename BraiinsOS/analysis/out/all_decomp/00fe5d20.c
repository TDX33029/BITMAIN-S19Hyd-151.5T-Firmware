// FUN_00fe5d20 @ 00fe5d20 size=308 calls_out=3 calls_in=7
// strings: 

void FUN_00fe5d20(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  uVar6 = 9;
  if ((int)uVar4 < 0) {
    uVar6 = uVar4 ^ 0x80000000;
  }
  switch(uVar6) {
  case 0:
  case 1:
  case 2:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
    goto switchD_00fe5d48_caseD_0;
  default:
    if (param_1[1] == 0) {
      return;
    }
    uVar4 = param_1[2];
    break;
  case 4:
    uVar4 = param_1[2];
    iVar13 = param_1[3] + 1;
    uVar6 = uVar4;
    while (iVar13 = iVar13 + -1, iVar13 != 0) {
      FUN_00ffd004(uVar6);
      uVar6 = uVar6 + 0x14;
    }
    goto LAB_00fe5e34;
  case 5:
    uVar4 = param_1[2];
    iVar13 = param_1[3] + 1;
    uVar6 = uVar4;
    while (iVar13 = iVar13 + -1, iVar13 != 0) {
      FUN_00ffd004(uVar6);
      uVar6 = uVar6 + 0x14;
    }
LAB_00fe5e34:
    if (param_1[1] == 0) {
switchD_00fe5d48_caseD_0:
      return;
    }
    break;
  case 6:
    uVar4 = param_1[1];
    FUN_00fe5d20(uVar4);
    break;
  case 7:
    uVar4 = param_1[1];
    FUN_00fe5d20(uVar4);
    break;
  case 8:
    uVar4 = param_1[1];
    FUN_00fe5d20(uVar4);
    break;
  case 9:
    if (uVar4 == 0) {
      return;
    }
    uVar4 = param_1[1];
    break;
  case 0xc:
    uVar4 = param_1[1];
    FUN_00fe5d20(uVar4);
    break;
  case 0x10:
    uVar4 = param_1[1];
    FUN_00fe5d20(uVar4);
    thunk_FUN_016d3fb4(uVar4);
    uVar4 = param_1[2];
    FUN_00fe5d20(uVar4);
    thunk_FUN_016d3fb4(uVar4);
    uVar4 = param_1[3];
    FUN_00fe5d20(uVar4);
  }
  if (uVar4 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar6 = *(byte *)(uVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(uVar4 - 3) >> 5);
  iVar12 = *(int *)(iVar13 + 8) + 0x10;
  iVar10 = iVar7 * uVar6 + iVar7 + -4;
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
  if (iVar7 - uVar4 < uVar9) {
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
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar9 = 1 << uVar6;
  *(undefined1 *)(uVar4 - 3) = 0xff;
  *(undefined2 *)(uVar4 - 2) = 0;
  do {
    uVar11 = *(uint *)(iVar13 + 0x10);
    uVar4 = *(uint *)(iVar13 + 0xc) | uVar11;
    if ((uVar9 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar4 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar6);
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
      *(uint *)(iVar13 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar14 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar4 = *puVar14;
      if (uVar11 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar4) {
      return;
    }
  } while( true );
}

