// FUN_00de0458 @ 00de0458 size=592 calls_out=11 calls_in=2
// strings: 

void FUN_00de0458(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((char)param_1[0x30] != '\0') {
    if ((char)param_1[0x30] != '\x03') {
      return;
    }
    FUN_00de080c(param_1 + 0xe);
    FUN_005e6cdc(param_1 + 10);
    if (param_1[0xd] != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 10);
    piVar15 = param_1 + 9;
    FUN_01663cc4(*piVar15);
    piVar4 = (int *)*piVar15;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(piVar15);
    }
    iVar7 = param_1[8];
    DataMemoryBarrier(0xb);
    piVar4 = (int *)(iVar7 + 0x44);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    DataMemoryBarrier(0xb);
    if (iVar5 != 1) goto LAB_00de064c;
    pcVar11 = (char *)(iVar7 + 0x10);
    if (*pcVar11 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar11);
      if (!bVar1) goto LAB_00de0628;
      *pcVar11 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00de0628:
      FUN_01280da8(pcVar11);
    }
    FUN_0128236c(pcVar11);
    *(undefined1 *)(iVar7 + 0x2c) = 1;
    FUN_0072a978(iVar7 + 8,pcVar11);
LAB_00de064c:
    piVar4 = (int *)param_1[8];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e454dc(param_1[8]);
    }
    if (param_1[5] == 0) {
      return;
    }
    iVar7 = param_1[6];
    if (iVar7 == 0) {
      return;
    }
    iVar5 = FUN_016d3bc8();
    uVar17 = *(byte *)(iVar7 + -3) & 0x1f;
    if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
       (uVar12 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
      iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar12 = (uint)(*(byte *)(iVar7 + -3) >> 5);
    iVar16 = *(int *)(iVar5 + 8) + 0x10;
    iVar13 = iVar8 * uVar17 + iVar8 + -4;
    iVar8 = iVar16 + iVar13;
    if (4 < uVar12) {
      if (uVar12 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar12 = *(uint *)(iVar8 + -4);
      if (uVar12 < 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar2)();
      }
      if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar2)();
      }
    }
    if ((uint)(iVar8 - iVar7) < uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar5 + 0x14);
    uVar12 = 1 << uVar17;
    *(undefined1 *)(iVar7 + -3) = 0xff;
    *(undefined2 *)(iVar7 + -2) = 0;
    do {
      uVar14 = *(uint *)(iVar5 + 0x10);
      uVar9 = *(uint *)(iVar5 + 0xc) | uVar14;
      if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar5,uVar17);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar6 = (undefined4 *)FUN_016d2bc8();
        uVar10 = *puVar6;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar6 = uVar10;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar5 + 0x10) = uVar12 + uVar14;
        return;
      }
      puVar18 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar18);
        uVar9 = *puVar18;
        if (uVar14 != uVar9) goto LAB_016d409c;
        bVar1 = (bool)hasExclusiveAccess(puVar18);
      } while (!bVar1);
      *puVar18 = uVar12 + uVar14;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar14 == uVar9) {
        return;
      }
    } while( true );
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  iVar7 = param_1[3];
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(iVar7 + 0x44);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  DataMemoryBarrier(0xb);
  if (iVar5 != 1) goto LAB_00de05ac;
  pcVar11 = (char *)(iVar7 + 0x10);
  if (*pcVar11 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar11);
    if (!bVar1) goto LAB_00de0588;
    *pcVar11 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00de0588:
    FUN_01280da8(pcVar11);
  }
  FUN_0128236c(pcVar11);
  *(undefined1 *)(iVar7 + 0x2c) = 1;
  FUN_0072a978(iVar7 + 8,pcVar11);
LAB_00de05ac:
  piVar4 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e454dc(param_1[3]);
  }
  param_1 = param_1 + 4;
  FUN_01663cc4(*param_1);
  piVar4 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1);
    return;
  }
  return;
}

