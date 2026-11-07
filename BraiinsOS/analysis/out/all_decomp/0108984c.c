// FUN_0108984c @ 0108984c size=228 calls_out=2 calls_in=3
// strings: 

void FUN_0108984c(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar4 = (undefined4 *)*param_1;
  bVar16 = puVar4 == (undefined4 *)&DAT_00000001;
  if (bVar16) {
    puVar4 = (undefined4 *)param_1[1];
  }
  if (bVar16 && puVar4 == param_2) {
    uVar5 = puVar4[1];
    *param_1 = 1;
    param_1[1] = uVar5;
    iVar6 = param_2[1];
    iVar7 = param_2[2];
  }
  else {
    iVar6 = param_2[1];
    iVar7 = param_2[2];
  }
  if (iVar7 == 0) {
    uVar5 = 0;
    param_1[3] = iVar6;
  }
  else {
    *(int *)(iVar7 + 4) = iVar6;
    uVar5 = param_2[2];
  }
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 8) = uVar5;
  }
  piVar9 = (int *)*param_2;
  iVar7 = param_1[2];
  if (iVar6 == 0) {
    param_1[4] = uVar5;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[2] = iVar7 + -1;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar9;
    bVar16 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar16);
  *piVar9 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    piVar3 = (int *)piVar9[4];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar16 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar16);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0108a158(piVar9[4]);
    }
    thunk_FUN_016d3fb4(piVar9);
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar14 = *(byte *)((int)param_2 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
  iVar13 = *(int *)(iVar6 + 8) + 0x10;
  iVar11 = iVar7 * uVar14 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - (int)param_2) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)((int)param_2 + -3) = 0xff;
  *(undefined2 *)((int)param_2 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar6 + 0x10);
    uVar8 = *(uint *)(iVar6 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar16);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

