// FUN_007b62d4 @ 007b62d4 size=264 calls_out=1 calls_in=1
// strings: 

void FUN_007b62d4(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar5 = *param_1;
  uVar3 = iVar5 + 0x80000001U & iVar5 >> 0x1f;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      if (param_1[5] == 0) {
        return;
      }
      iVar11 = param_1[6];
    }
    else {
      if (param_1[1] == 0) {
        return;
      }
      iVar11 = param_1[2];
    }
    goto LAB_014b47f4;
  }
  if ((short)param_1[3] == 0) {
LAB_007b6340:
    bVar15 = (short)param_1[0xc] != 0;
    iVar11 = 0;
    if (bVar15) {
      iVar11 = param_1[0xd];
    }
    if (bVar15 && iVar11 != 0) {
      thunk_FUN_016d3fb4(param_1[0xe]);
    }
  }
  else if ((short)param_1[3] != 2) {
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    goto LAB_007b6340;
  }
  iVar11 = param_1[1];
  puVar7 = (undefined4 *)(iVar11 + 0x10);
  for (iVar13 = param_1[2]; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (puVar7[-4] != 0) {
      thunk_FUN_016d3fb4(puVar7[-3]);
    }
    if (puVar7[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar7);
    }
    puVar7 = puVar7 + 6;
  }
  if (iVar5 == 0) {
    return;
  }
LAB_014b47f4:
  if (iVar11 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar3 = *(byte *)(iVar11 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar13 = uVar8 - 0x10, uVar8 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(iVar11 + -3) >> 5);
  iVar12 = *(int *)(iVar5 + 8) + 0x10;
  iVar9 = iVar13 * uVar3 + iVar13 + -4;
  iVar13 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar13 + -4);
    if (uVar8 < 5) {
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
  if ((uint)(iVar13 - iVar11) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar8 = 1 << uVar3;
  *(undefined1 *)(iVar11 + -3) = 0xff;
  *(undefined2 *)(iVar11 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar5 + 0x10);
    uVar4 = *(uint *)(iVar5 + 0xc) | uVar10;
    if ((uVar8 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar4 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar6;
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
      uVar4 = *puVar14;
      if (uVar10 != uVar4) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar4) {
      return;
    }
  } while( true );
}

