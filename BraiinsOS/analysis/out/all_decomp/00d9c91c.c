// FUN_00d9c91c @ 00d9c91c size=540 calls_out=3 calls_in=1
// strings: 

void FUN_00d9c91c(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((*param_1 & 3) == 2) {
LAB_00d9c96c:
    if (param_1[0xb0] == 0x80000000 || param_1[0xb0] == 0) goto LAB_00d9c97c;
LAB_00d9ca1c:
    thunk_FUN_016d3fb4(param_1[0xb1]);
    uVar13 = param_1[0xb3];
  }
  else {
    if (*param_1 == 3) {
      return;
    }
    if (param_1[6] == 0x80000000 || param_1[6] == 0) {
      if (param_1[9] == 0x80000000 || param_1[9] == 0) goto LAB_00d9c95c;
LAB_00d9c9ec:
      thunk_FUN_016d3fb4(param_1[10]);
      if (param_1[0xc] == 0x80000000 || param_1[0xc] == 0) goto LAB_00d9c96c;
    }
    else {
      thunk_FUN_016d3fb4(param_1[7]);
      if (param_1[9] != 0x80000000 && param_1[9] != 0) goto LAB_00d9c9ec;
LAB_00d9c95c:
      if (param_1[0xc] == 0x80000000 || param_1[0xc] == 0) goto LAB_00d9c96c;
    }
    thunk_FUN_016d3fb4(param_1[0xd]);
    if (param_1[0xb0] != 0x80000000 && param_1[0xb0] != 0) goto LAB_00d9ca1c;
LAB_00d9c97c:
    uVar13 = param_1[0xb3];
  }
  if (uVar13 != 0x80000000) {
    uVar8 = param_1[0xb4];
    uVar12 = param_1[0xb5];
    for (uVar10 = 0; uVar12 != uVar10; uVar10 = uVar10 + 1) {
      iVar4 = uVar8 + uVar10 * 0x20;
      if (*(int *)(iVar4 + 0x10) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x14));
      }
    }
    if (uVar13 != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
  }
  FUN_005c7b40(param_1 + 0x30);
  if (param_1[0x46] == 2 && param_1[0x47] == 0) goto LAB_00d9ca8c;
  if (param_1[0x5e] == 0x80000000 || param_1[0x5e] == 0) {
    if (param_1[0x68] == 0x80000000 || param_1[0x68] == 0) goto LAB_00d9ca6c;
LAB_00d9cafc:
    thunk_FUN_016d3fb4(param_1[0x69]);
    if (param_1[0x72] != 0x80000000 && param_1[0x72] != 0) goto LAB_00d9cb14;
LAB_00d9ca7c:
    if (param_1[0x7c] == 0x80000000 || param_1[0x7c] == 0) goto LAB_00d9ca8c;
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x5f]);
    if (param_1[0x68] != 0x80000000 && param_1[0x68] != 0) goto LAB_00d9cafc;
LAB_00d9ca6c:
    if (param_1[0x72] == 0x80000000 || param_1[0x72] == 0) goto LAB_00d9ca7c;
LAB_00d9cb14:
    thunk_FUN_016d3fb4(param_1[0x73]);
    if (param_1[0x7c] == 0x80000000 || param_1[0x7c] == 0) goto LAB_00d9ca8c;
  }
  thunk_FUN_016d3fb4(param_1[0x7d]);
LAB_00d9ca8c:
  uVar8 = param_1[0xab];
  iVar4 = param_1[0xac] + 1;
  uVar13 = uVar8;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_00f24560(uVar13);
    uVar13 = uVar13 + 0x2e0;
  }
  if (param_1[0xaa] != 0) {
    thunk_FUN_016d3fb4(uVar8);
  }
  if (param_1[0xad] == 0) {
    return;
  }
  uVar13 = param_1[0xae];
  if (uVar13 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar8 = *(byte *)(uVar13 - 3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(uVar13 - 3) >> 5);
  iVar11 = *(int *)(iVar4 + 8) + 0x10;
  iVar9 = iVar6 * uVar8 + iVar6 + -4;
  iVar6 = iVar11 + iVar9;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
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
  if (iVar6 - uVar13 < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar8;
  *(undefined1 *)(uVar13 - 3) = 0xff;
  *(undefined2 *)(uVar13 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar13 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar13 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar8);
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
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar14 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar13 = *puVar14;
      if (uVar12 != uVar13) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar13) {
      return;
    }
  } while( true );
}

