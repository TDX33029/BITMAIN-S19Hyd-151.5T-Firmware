// FUN_0063d498 @ 0063d498 size=324 calls_out=1 calls_in=0
// strings: 

void FUN_0063d498(int *param_1)

{
  short sVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  short *psVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  sVar1 = (short)param_1[6];
  if (sVar1 != 2) {
    iVar4 = 0;
    if (sVar1 != 0) {
      iVar4 = param_1[7];
    }
    if (sVar1 != 0 && iVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[8]);
    }
    bVar17 = (short)param_1[0xf] != 0;
    iVar4 = 0;
    if (bVar17) {
      iVar4 = param_1[0x10];
    }
    if (bVar17 && iVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[0x11]);
      iVar4 = param_1[1];
      iVar15 = param_1[2];
      goto joined_r0x0063d4e0;
    }
  }
  iVar4 = param_1[1];
  iVar15 = param_1[2];
joined_r0x0063d4e0:
  if (iVar15 != 0) {
    psVar9 = (short *)(iVar4 + 0x24);
    do {
      iVar5 = 0;
      if (psVar9[-0x12] != 0) {
        iVar5 = *(int *)(psVar9 + -0x10);
      }
      if (psVar9[-0x12] != 0 && iVar5 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar9 + -0xe));
      }
      iVar5 = 0;
      if (*psVar9 != 0) {
        iVar5 = *(int *)(psVar9 + 2);
      }
      if (*psVar9 != 0 && iVar5 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar9 + 4));
      }
      psVar9 = psVar9 + 0x22;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  iVar4 = param_1[5];
  iVar15 = param_1[4];
  if (iVar4 != 0) {
    puVar10 = (undefined4 *)(iVar15 + 0x10);
    do {
      if ((puVar10[-4] & 0x7fffffff) == 0) {
        uVar6 = puVar10[-1];
      }
      else {
        thunk_FUN_016d3fb4(puVar10[-3]);
        uVar6 = puVar10[-1];
      }
      if ((uVar6 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar10);
      }
      puVar10 = puVar10 + 0x17;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (param_1[3] == 0) {
    return;
  }
  if (iVar15 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar6 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar5 = uVar11 - 0x10, uVar11 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar5 * uVar6 + iVar5 + -4;
  iVar5 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar5 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar5 - iVar15) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar5 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar6;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar7 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar10;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar10 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar13 != uVar7) goto LAB_016d409c;
      bVar17 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar17);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar7) {
      return;
    }
  } while( true );
}

