// FUN_010402a4 @ 010402a4 size=216 calls_out=2 calls_in=1
// strings: 

void FUN_010402a4(int *param_1)

{
  short sVar1;
  code *pcVar2;
  byte bVar3;
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
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar5 = param_1[0x11];
  if (iVar5 == -0x80000000) {
    iVar11 = *param_1;
    FUN_01036ca0(iVar11);
  }
  else {
    sVar1 = (short)*param_1;
    if (sVar1 != 2) {
      iVar11 = 0;
      if (sVar1 != 0) {
        iVar11 = param_1[1];
      }
      if (sVar1 != 0 && iVar11 != 0) {
        thunk_FUN_016d3fb4(param_1[2]);
      }
      bVar16 = (short)param_1[9] != 0;
      iVar11 = 0;
      if (bVar16) {
        iVar11 = param_1[10];
      }
      if (bVar16 && iVar11 != 0) {
        thunk_FUN_016d3fb4(param_1[0xb]);
      }
    }
    iVar11 = param_1[0x12];
    puVar7 = (undefined4 *)(iVar11 + 0x10);
    for (iVar13 = param_1[0x13]; iVar13 != 0; iVar13 = iVar13 + -1) {
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
  }
  if (iVar11 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar11 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar13 = uVar8 - 0x10, uVar8 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(iVar11 + -3) >> 5);
  iVar12 = *(int *)(iVar5 + 8) + 0x10;
  iVar9 = iVar13 * uVar14 + iVar13 + -4;
  iVar13 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar8 = *(uint *)(iVar13 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar13 - iVar11) < uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar5 + 0x14);
  uVar8 = 1 << uVar14;
  *(undefined1 *)(iVar11 + -3) = 0xff;
  *(undefined2 *)(iVar11 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar5 + 0x10);
    uVar4 = *(uint *)(iVar5 + 0xc) | uVar10;
    if ((uVar8 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar10 == 0) || (uVar4 + uVar8 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar14);
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
    puVar15 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar4 = *puVar15;
      if (uVar10 != uVar4) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar16);
    *puVar15 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar4) {
      return;
    }
  } while( true );
}

