// FUN_0109323c @ 0109323c size=260 calls_out=1 calls_in=2
// strings: 

void FUN_0109323c(int *param_1)

{
  short sVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar6 = *param_1;
  uVar4 = iVar6 + 0x80000001U & iVar6 >> 0x1f;
  if (uVar4 == 0) {
    sVar1 = (short)param_1[3];
    if (sVar1 != 2) {
      iVar12 = 0;
      if (sVar1 != 0) {
        iVar12 = param_1[4];
      }
      if (sVar1 != 0 && iVar12 != 0) {
        thunk_FUN_016d3fb4(param_1[5]);
      }
      bVar16 = (short)param_1[0xc] != 0;
      iVar12 = 0;
      if (bVar16) {
        iVar12 = param_1[0xd];
      }
      if (bVar16 && iVar12 != 0) {
        thunk_FUN_016d3fb4(param_1[0xe]);
      }
    }
    iVar12 = param_1[1];
    puVar8 = (undefined4 *)(iVar12 + 0x10);
    for (iVar14 = param_1[2]; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (puVar8[-4] != 0) {
        thunk_FUN_016d3fb4(puVar8[-3]);
      }
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 6;
    }
    if (iVar6 == 0) {
      return;
    }
  }
  else if (uVar4 == 1) {
    if (param_1[5] == 0) {
      return;
    }
    iVar12 = param_1[6];
  }
  else {
    if (param_1[1] == 0) {
      return;
    }
    iVar12 = param_1[2];
  }
  if (iVar12 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar14 = uVar9 - 0x10, uVar9 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar12 + -3) >> 5);
  iVar13 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar14 * uVar4 + iVar14 + -4;
  iVar14 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar9 = *(uint *)(iVar14 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar14 - iVar12) < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar9 = 1 << uVar4;
  *(undefined1 *)(iVar12 + -3) = 0xff;
  *(undefined2 *)(iVar12 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar6 + 0x10);
    uVar5 = *(uint *)(iVar6 + 0xc) | uVar11;
    if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar5 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar7;
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
      uVar5 = *puVar15;
      if (uVar11 != uVar5) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar16);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar5) {
      return;
    }
  } while( true );
}

