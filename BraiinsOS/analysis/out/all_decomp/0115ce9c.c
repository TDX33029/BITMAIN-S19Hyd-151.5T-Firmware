// FUN_0115ce9c @ 0115ce9c size=144 calls_out=3 calls_in=3
// strings: 

void FUN_0115ce9c(int *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar11 = (undefined4 *)param_1[0xbd];
  iVar9 = param_1[0xbc];
  pcVar3 = (code *)*puVar11;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(iVar9);
  }
  if (puVar11[1] != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  iVar12 = param_1[0xc1] + 1;
  iVar9 = param_1[0xc0];
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_0115d04c(iVar9);
    iVar9 = iVar9 + 0x40;
  }
  if (param_1[0xbf] != 0) {
    thunk_FUN_016d3fb4(param_1[0xc0]);
  }
  if (*param_1 != 2) {
    FUN_0115d0e4(param_1);
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar13 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar12 = uVar6 - 0x10, uVar6 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar6 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar10 = *(int *)(iVar9 + 8) + 0x10;
  iVar7 = iVar12 * uVar13 + iVar12 + -4;
  iVar12 = iVar10 + iVar7;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar6 = *(uint *)(iVar12 + -4);
    if (uVar6 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar12 - (int)param_1) < uVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar12 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar10 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar9 + 0x14);
  uVar6 = 1 << uVar13;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
  do {
    uVar8 = *(uint *)(iVar9 + 0x10);
    uVar4 = *(uint *)(iVar9 + 0xc) | uVar8;
    if ((uVar6 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar8 == 0) || (uVar4 + uVar6 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar11;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar11 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar6 + uVar8;
      return;
    }
    puVar14 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar4 = *puVar14;
      if (uVar8 != uVar4) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar2);
    *puVar14 = uVar6 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar4) {
      return;
    }
  } while( true );
}

