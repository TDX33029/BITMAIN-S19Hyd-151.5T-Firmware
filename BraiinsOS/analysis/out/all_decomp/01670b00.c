// FUN_01670b00 @ 01670b00 size=808 calls_out=3 calls_in=0
// strings: 

void FUN_01670b00(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = 6;
  if (1 < (uint)param_1[0x15]) {
    iVar4 = param_1[0x15] - 2;
  }
  switch(iVar4) {
  case 0:
    if (*param_1 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if ((param_1[3] != -0x7ffffffd) && (0 < param_1[3])) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    if ((param_1[6] != -0x7ffffffd) && (0 < param_1[6])) {
      thunk_FUN_016d3fb4(param_1[7]);
    }
    if (param_1[9] == -0x7ffffffd) {
      return;
    }
    if (param_1[9] < 1) {
      return;
    }
    iVar4 = param_1[10];
    break;
  case 1:
    if ((param_1[8] != -0x7ffffffd) && (0 < param_1[8])) {
      thunk_FUN_016d3fb4(param_1[9]);
    }
    if ((*param_1 != -0x7ffffffd) && (0 < *param_1)) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[3] == -0x7ffffffd) {
      return;
    }
    if (param_1[3] < 1) {
      return;
    }
    iVar4 = param_1[4];
    break;
  case 2:
    if ((param_1[8] != -0x7ffffffd) && (0 < param_1[8])) {
      thunk_FUN_016d3fb4(param_1[9]);
    }
    if ((*param_1 != -0x7ffffffd) && (0 < *param_1)) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[3] == -0x7ffffffd) {
      return;
    }
    if (param_1[3] < 1) {
      return;
    }
    iVar4 = param_1[4];
    break;
  case 3:
    if ((*param_1 != -0x7ffffffd) && (0 < *param_1)) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if ((param_1[3] != -0x7ffffffd) && (0 < param_1[3])) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    if (param_1[6] == -0x7ffffffd) {
      return;
    }
    if (param_1[6] < 1) {
      return;
    }
    iVar4 = param_1[7];
    break;
  case 4:
    if ((param_1[6] != -0x7ffffffd) && (0 < param_1[6])) {
      thunk_FUN_016d3fb4(param_1[7]);
    }
    if ((param_1[9] != -0x7ffffffd) && (0 < param_1[9])) {
      thunk_FUN_016d3fb4(param_1[10]);
    }
    if (param_1[0xc] == -0x7ffffffd) {
      return;
    }
    if (param_1[0xc] < 1) {
      return;
    }
    iVar4 = param_1[0xd];
    break;
  case 5:
    if (0 < param_1[6]) {
      thunk_FUN_016d3fb4(param_1[7]);
    }
    if ((param_1[9] != -0x7ffffffd) && (0 < param_1[9])) {
      thunk_FUN_016d3fb4(param_1[10]);
    }
    if ((param_1[0xc] != -0x7ffffffd) && (0 < param_1[0xc])) {
      thunk_FUN_016d3fb4(param_1[0xd]);
    }
    iVar4 = param_1[4];
    FUN_0168f180(iVar4,param_1[5]);
    iVar6 = param_1[3];
    goto joined_r0x01670e38;
  default:
    if (0 < param_1[0x12]) {
      thunk_FUN_016d3fb4(param_1[0x13]);
    }
    if ((param_1[0xc] != -0x7ffffffd) && (0 < param_1[0xc])) {
      thunk_FUN_016d3fb4(param_1[0xd]);
    }
    if ((param_1[0xf] != -0x7ffffffd) && (0 < param_1[0xf])) {
      thunk_FUN_016d3fb4(param_1[0x10]);
    }
    iVar4 = param_1[8];
    if ((iVar4 != 0) && (iVar6 = iVar4 * 4 + 4, iVar4 + iVar6 != -5)) {
      thunk_FUN_016d3fb4(param_1[7] - iVar6);
    }
    iVar4 = param_1[5];
    iVar13 = param_1[6] + 1;
    iVar6 = iVar4;
    while (iVar13 = iVar13 + -1, iVar13 != 0) {
      FUN_0168f044(iVar6);
      iVar6 = iVar6 + 0xc0;
    }
    iVar6 = param_1[4];
joined_r0x01670e38:
    if (iVar6 == 0) {
      return;
    }
  }
  if (iVar4 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar13 = uVar9 - 0x10, uVar9 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar12 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar13 * uVar14 + iVar13 + -4;
  iVar13 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar13 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar13 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 - uVar9) != '\0') {
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
  uVar9 = 1 << uVar14;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar6 + 0x10);
    uVar7 = *(uint *)(iVar6 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar14);
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
    puVar15 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

