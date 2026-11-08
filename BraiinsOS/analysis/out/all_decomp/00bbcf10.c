// FUN_00bbcf10 @ 00bbcf10 size=224 calls_out=2 calls_in=0
// strings: 

void FUN_00bbcf10(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1[4] != 0) {
    thunk_FUN_016d3fb4(param_1[5]);
  }
  iVar9 = param_1[8];
  iVar5 = iVar9;
  for (iVar11 = param_1[9]; iVar11 != 0; iVar11 = iVar11 + -1) {
    FUN_00a61374(iVar5);
    iVar5 = iVar5 + 0x10;
  }
  if (param_1[7] != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  iVar5 = *param_1;
  bVar15 = iVar5 != 2;
  if (bVar15) {
    iVar5 = param_1[1];
  }
  if (bVar15 && iVar5 != 0) {
    thunk_FUN_016d3fb4(param_1[2]);
    iVar5 = param_1[0xd];
  }
  else {
    iVar5 = param_1[0xd];
  }
  if (iVar5 != 0) {
    puVar12 = (undefined4 *)param_1[0xe];
    pcVar2 = (code *)*puVar12;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar5);
    }
    if (puVar12[1] != 0) {
      thunk_FUN_016d3fb4(iVar5);
    }
  }
  if ((param_1[10] < -0x7ffffffe) || (param_1[10] == 0)) {
    return;
  }
  iVar5 = param_1[0xb];
  if (iVar5 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar13 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar9 = uVar6 - 0x10, uVar6 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar6 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar10 = *(int *)(iVar11 + 8) + 0x10;
  iVar7 = iVar9 * uVar13 + iVar9 + -4;
  iVar9 = iVar10 + iVar7;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar6 = *(uint *)(iVar9 + -4);
    if (uVar6 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar9 - iVar5) < uVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar9 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar10 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(iVar11 + 0x14);
  uVar6 = 1 << uVar13;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar8 = *(uint *)(iVar11 + 0x10);
    uVar3 = *(uint *)(iVar11 + 0xc) | uVar8;
    if ((uVar6 & uVar3) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar8 == 0) || (uVar3 + uVar6 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar4 = *puVar12;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar12 = uVar4;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar6 + uVar8;
      return;
    }
    puVar14 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar3 = *puVar14;
      if (uVar8 != uVar3) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar6 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar3) {
      return;
    }
  } while( true );
}

