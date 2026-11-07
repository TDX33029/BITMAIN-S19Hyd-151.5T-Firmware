// FUN_00e55bcc @ 00e55bcc size=948 calls_out=12 calls_in=1
// strings: 

void FUN_00e55bcc(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0xe0) == '\x03') {
    if (*(char *)(param_1 + 0xdc) != '\x03') {
      if (*(char *)(param_1 + 0xdc) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x1c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
      }
      iVar14 = *(int *)(param_1 + 0x28);
      DataMemoryBarrier(0xb);
      piVar5 = (int *)(iVar14 + 0x44);
      do {
        iVar4 = *piVar5;
        bVar18 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar18);
      *piVar5 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        pcVar10 = (char *)(iVar14 + 0x10);
        if (*pcVar10 == '\0') {
          bVar18 = (bool)hasExclusiveAccess(pcVar10);
          if (!bVar18) goto LAB_00e55e60;
          *pcVar10 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00e55e60:
          FUN_01280da8(pcVar10);
        }
        FUN_0128236c(pcVar10);
        *(undefined1 *)(iVar14 + 0x2c) = 1;
        FUN_0072a978(iVar14 + 8,pcVar10);
      }
      piVar5 = *(int **)(param_1 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar5;
        bVar18 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar18);
      *piVar5 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e454dc(*(undefined4 *)(param_1 + 0x28));
      }
      puVar8 = (undefined4 *)(param_1 + 0x2c);
      FUN_01663cc4(*puVar8);
      piVar5 = (int *)*puVar8;
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar5;
        bVar18 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar18);
      *piVar5 = iVar14 + -1;
      goto LAB_00e55ed8;
    }
    cVar1 = *(char *)(param_1 + 0xac);
    bVar18 = cVar1 == '\x03';
    if (bVar18) {
      cVar1 = *(char *)(param_1 + 0x70);
    }
    if (bVar18 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0xa8);
      bVar18 = cVar1 == '\x03';
      if (bVar18) {
        cVar1 = *(char *)(param_1 + 0xa4);
      }
      if (bVar18 && cVar1 == '\x03') {
        FUN_0163aa10(param_1 + 0x84);
        if (*(int *)(param_1 + 0x90) != 0) {
          (**(code **)(*(int *)(param_1 + 0x90) + 0xc))(*(undefined4 *)(param_1 + 0x94));
        }
      }
    }
    FUN_0163bdc0(param_1 + 0xb4);
    if (*(int *)(param_1 + 0xc4) != 0) {
      (**(code **)(*(int *)(param_1 + 0xc4) + 0xc))(*(undefined4 *)(param_1 + 200));
    }
    FUN_005e6cdc(param_1 + 0x44);
    if (*(int *)(param_1 + 0x50) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 0x44);
    puVar8 = (undefined4 *)(param_1 + 0x40);
    FUN_01663cc4(*puVar8);
    piVar5 = (int *)*puVar8;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar5;
      bVar18 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar18);
    *piVar5 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar8);
    }
    iVar14 = *(int *)(param_1 + 0x3c);
    DataMemoryBarrier(0xb);
    piVar5 = (int *)(iVar14 + 0x44);
    do {
      iVar4 = *piVar5;
      bVar18 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar18);
    *piVar5 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 != 1) goto LAB_00e55f24;
    pcVar10 = (char *)(iVar14 + 0x10);
    if (*pcVar10 == '\0') {
      bVar18 = (bool)hasExclusiveAccess(pcVar10);
      if (!bVar18) goto LAB_00e55f00;
      *pcVar10 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00e55f00:
      FUN_01280da8(pcVar10);
    }
    FUN_0128236c(pcVar10);
    *(undefined1 *)(iVar14 + 0x2c) = 1;
    FUN_0072a978(iVar14 + 8,pcVar10);
LAB_00e55f24:
    piVar5 = *(int **)(param_1 + 0x3c);
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar5;
      bVar18 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar18);
    *piVar5 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e454dc(*(undefined4 *)(param_1 + 0x3c));
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 0x34);
    if (iVar14 == 0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar16 = *(byte *)(iVar14 + -3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar11 - 0x10, uVar11 == 0)) {
      iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar11 = (uint)(*(byte *)(iVar14 + -3) >> 5);
    iVar15 = *(int *)(iVar4 + 8) + 0x10;
    iVar12 = iVar6 * uVar16 + iVar6 + -4;
    iVar6 = iVar15 + iVar12;
    if (4 < uVar11) {
      if (uVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar11 = *(uint *)(iVar6 + -4);
      if (uVar11 < 5) {
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
    if ((uint)(iVar6 - iVar14) < uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar6 - uVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar4 + 0x14);
    uVar11 = 1 << uVar16;
    *(undefined1 *)(iVar14 + -3) = 0xff;
    *(undefined2 *)(iVar14 + -2) = 0;
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
        FUN_016d3ca8(&uStack_28,iVar4,uVar16);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar8 = (undefined4 *)FUN_016d2bc8();
        uVar9 = *puVar8;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar8 = uVar9;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
        return;
      }
      puVar17 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar17);
        uVar7 = *puVar17;
        if (uVar13 != uVar7) goto LAB_016d409c;
        bVar18 = (bool)hasExclusiveAccess(puVar17);
      } while (!bVar18);
      *puVar17 = uVar11 + uVar13;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar13 == uVar7) {
        return;
      }
    } while( true );
  }
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
  }
  iVar14 = *(int *)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  piVar5 = (int *)(iVar14 + 0x44);
  do {
    iVar4 = *piVar5;
    bVar18 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar18);
  *piVar5 = iVar4 + -1;
  DataMemoryBarrier(0xb);
  if (iVar4 == 1) {
    pcVar10 = (char *)(iVar14 + 0x10);
    if (*pcVar10 == '\0') {
      bVar18 = (bool)hasExclusiveAccess(pcVar10);
      if (!bVar18) goto LAB_00e55d94;
      *pcVar10 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00e55d94:
      FUN_01280da8(pcVar10);
    }
    FUN_0128236c(pcVar10);
    *(undefined1 *)(iVar14 + 0x2c) = 1;
    FUN_0072a978(iVar14 + 8,pcVar10);
  }
  piVar5 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar5;
    bVar18 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar18);
  *piVar5 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e454dc(*(undefined4 *)(param_1 + 0x14));
  }
  puVar8 = (undefined4 *)(param_1 + 0x18);
  FUN_01663cc4(*puVar8);
  piVar5 = (int *)*puVar8;
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar5;
    bVar18 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar18);
  *piVar5 = iVar14 + -1;
LAB_00e55ed8:
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar8);
    return;
  }
  return;
}

