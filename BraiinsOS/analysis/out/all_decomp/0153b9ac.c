// FUN_0153b9ac @ 0153b9ac size=372 calls_out=3 calls_in=1
// strings: 

void FUN_0153b9ac(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar3 = (int *)param_1[0x41];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_1[0x41]);
  }
  if (param_1[0xf] != -0x80000000) {
    FUN_015376c0(param_1 + 6);
  }
  if (((char)param_1[0x3c] == '\0') && ((param_1[0x3d] & 0x7fffffffU) != 0)) {
    thunk_FUN_016d3fb4(param_1[0x3e]);
    iVar4 = param_1[0x3a];
    puVar13 = (undefined4 *)param_1[0x3b];
    pcVar5 = (code *)*puVar13;
  }
  else {
    iVar4 = param_1[0x3a];
    puVar13 = (undefined4 *)param_1[0x3b];
    pcVar5 = (code *)*puVar13;
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(iVar4);
  }
  if (puVar13[1] != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  if ((param_1[0x35] & 0x7fffffffU) == 0) {
    iVar4 = param_1[2];
    iVar14 = param_1[1];
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x36]);
    iVar4 = param_1[2];
    iVar14 = param_1[1];
  }
  if (iVar4 != 0) {
    puVar13 = (undefined4 *)(iVar14 + 4);
    do {
      if ((puVar13[-1] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar13);
      }
      puVar13 = puVar13 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  if (param_1[3] != 0) {
    thunk_FUN_016d3fb4(param_1[4]);
  }
  if (param_1[0x2e] != 0) {
    thunk_FUN_016d3fb4(param_1[0x2f]);
  }
  if (param_1[0x31] == 0) {
    return;
  }
  iVar4 = param_1[0x32];
  if (iVar4 == 0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar12 = *(int *)(iVar14 + 8) + 0x10;
  iVar10 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar6 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar14 + 0x10);
    uVar7 = *(uint *)(iVar14 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

