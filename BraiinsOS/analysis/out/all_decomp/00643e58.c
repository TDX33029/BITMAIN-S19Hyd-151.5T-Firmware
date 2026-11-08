// FUN_00643e58 @ 00643e58 size=276 calls_out=1 calls_in=10
// strings: 

void FUN_00643e58(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*param_1) {
  case 0:
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[3]);
    }
    if (param_1[6] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    if (param_1[8] != 0) {
      thunk_FUN_016d3fb4(param_1[7]);
    }
    iVar6 = param_1[10];
    iVar5 = 0x24;
    break;
  case 1:
  case 3:
  case 9:
  case 0xc:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
    return;
  default:
    iVar6 = param_1[2];
    iVar5 = 4;
    break;
  case 0x12:
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[3]);
    }
    if (param_1[6] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    iVar6 = param_1[8];
    iVar5 = 0x1c;
  }
  if (iVar6 == 0) {
    return;
  }
  iVar5 = *(int *)((int)param_1 + iVar5);
  if (iVar5 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar13 = *(int *)(iVar6 + 8) + 0x10;
  iVar11 = iVar7 * uVar14 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar7 - iVar5) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar6 + 0x10);
    uVar8 = *(uint *)(iVar6 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

