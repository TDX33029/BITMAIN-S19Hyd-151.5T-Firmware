// FUN_014a582c @ 014a582c size=248 calls_out=2 calls_in=10
// strings: 

void FUN_014a582c(int param_1,int param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int extraout_r1;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar4 = *(int **)(param_1 + 0xc);
  while (piVar4 != (int *)0x0) {
    piVar13 = (int *)piVar4[4];
    if (*piVar4 != 0) {
      param_2 = piVar4[1];
    }
    if (*piVar4 != 0 && param_2 != 0) {
      thunk_FUN_016d3fb4();
    }
    thunk_FUN_016d3fb4(piVar4);
    param_2 = extraout_r1;
    piVar4 = piVar13;
  }
  piVar4 = (int *)*(int *)(param_1 + 0x14);
  while (piVar4 != (int *)0x0) {
    iVar9 = *piVar4;
    piVar13 = (int *)piVar4[1];
    if (piVar13 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar13;
        bVar1 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar1);
      *piVar13 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar4[1]);
      }
    }
    thunk_FUN_016d3fb4(piVar4);
    piVar4 = (int *)iVar9;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  }
  if (param_1 == -1) {
    return;
  }
  piVar4 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar9 + -1;
  if (iVar9 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar15 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar9 + 8) + 0x10;
  iVar11 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar6 - param_1) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar9 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar9 + 0x10);
    uVar7 = *(uint *)(iVar9 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

