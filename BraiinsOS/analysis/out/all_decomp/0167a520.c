// FUN_0167a520 @ 0167a520 size=900 calls_out=3 calls_in=1
// strings: 

void FUN_0167a520(int *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = param_1[0x15];
  if (uVar3 == 8) {
    if (*param_1 == 0) {
      return;
    }
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    iVar14 = param_1[4];
    if (iVar14 == 0) {
      return;
    }
    puVar7 = (undefined4 *)param_1[5];
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar14);
    }
    iVar4 = puVar7[1];
    goto joined_r0x0167a580;
  }
  iVar14 = 6;
  if (1 < uVar3) {
    iVar14 = uVar3 - 2;
  }
  switch(iVar14) {
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
    iVar14 = param_1[10];
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
    iVar14 = param_1[4];
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
    iVar14 = param_1[4];
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
    iVar14 = param_1[7];
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
    iVar14 = param_1[0xd];
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
    iVar14 = param_1[4];
    FUN_0168f180(iVar14,param_1[5]);
    iVar4 = param_1[3];
    goto joined_r0x0167a580;
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
    iVar14 = param_1[8];
    if ((iVar14 != 0) && (iVar4 = iVar14 * 4 + 4, iVar14 + iVar4 != -5)) {
      thunk_FUN_016d3fb4(param_1[7] - iVar4);
    }
    iVar14 = param_1[5];
    iVar13 = param_1[6] + 1;
    iVar4 = iVar14;
    while (iVar13 = iVar13 + -1, iVar13 != 0) {
      FUN_0168f044(iVar4);
      iVar4 = iVar4 + 0xc0;
    }
    iVar4 = param_1[4];
joined_r0x0167a580:
    if (iVar4 == 0) {
      return;
    }
  }
  if (iVar14 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar3 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar13 = uVar9 - 0x10, uVar9 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar13 * uVar3 + iVar13 + -4;
  iVar13 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar9 = *(uint *)(iVar13 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar13 - iVar14) < uVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar13 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar1 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar3;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar6 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar3);
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
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar11 != uVar6) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar6) {
      return;
    }
  } while( true );
}

