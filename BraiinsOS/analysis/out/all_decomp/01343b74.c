// FUN_01343b74 @ 01343b74 size=292 calls_out=1 calls_in=4
// strings: 

void FUN_01343b74(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = *param_1;
  iVar5 = 6;
  if (0x80000000 < uVar3) {
    iVar5 = uVar3 + 0x7fffffff;
  }
  switch(iVar5) {
  case 0:
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    uVar3 = param_1[4];
    puVar12 = (undefined4 *)param_1[5];
    pcVar4 = (code *)*puVar12;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar3);
    }
    if (puVar12[1] == 0) {
      return;
    }
    break;
  default:
    if (param_1[1] == 0) {
      return;
    }
    uVar3 = param_1[2];
    break;
  case 3:
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    uVar3 = param_1[5];
    break;
  case 6:
    if (uVar3 == 0x80000000) {
      param_1 = param_1 + 1;
      uVar3 = *param_1;
    }
    else {
      if (uVar3 != 0) {
        thunk_FUN_016d3fb4(param_1[1]);
      }
      param_1 = param_1 + 3;
      uVar3 = *param_1;
    }
    if (uVar3 == 0) {
      return;
    }
    uVar3 = param_1[1];
  }
  if (uVar3 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar13 = *(byte *)(uVar3 - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(uVar3 - 3) >> 5);
  iVar11 = *(int *)(iVar5 + 8) + 0x10;
  iVar9 = iVar6 * uVar13 + iVar6 + -4;
  iVar6 = iVar11 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar8 = *(uint *)(iVar6 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if (iVar6 - uVar3 < uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar5 + 0x14);
  uVar8 = 1 << uVar13;
  *(undefined1 *)(uVar3 - 3) = 0xff;
  *(undefined2 *)(uVar3 - 2) = 0;
  do {
    uVar10 = *(uint *)(iVar5 + 0x10);
    uVar3 = *(uint *)(iVar5 + 0xc) | uVar10;
    if ((uVar8 & uVar3) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar10 == 0) || (uVar3 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar12;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar12 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar14 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar3 = *puVar14;
      if (uVar10 != uVar3) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar2);
    *puVar14 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar3) {
      return;
    }
  } while( true );
}

