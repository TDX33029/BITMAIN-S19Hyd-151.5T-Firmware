// FUN_00da42d8 @ 00da42d8 size=1068 calls_out=12 calls_in=4
// strings: 

void FUN_00da42d8(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    puVar13 = (undefined4 *)param_1[4];
    if (param_1[2] == 0 && param_1[3] == 0) {
      if (puVar13 == (undefined4 *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00da43c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar13)(puVar13);
      return;
    }
    if (puVar13 == (undefined4 *)0x0) {
      return;
    }
    puVar7 = (undefined4 *)param_1[5];
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(puVar13);
    }
    if (puVar7[1] == 0) {
      return;
    }
    goto LAB_014b47f4;
  }
  if ((char)param_1[0x38] == '\x03') {
    if ((char)param_1[0x37] != '\x03') {
      if ((char)param_1[0x37] != '\0') {
        return;
      }
      if (param_1[7] != 0) {
        thunk_FUN_016d3fb4(param_1[8]);
      }
      iVar14 = param_1[10];
      DataMemoryBarrier(0xb);
      piVar5 = (int *)(iVar14 + 0x44);
      do {
        iVar3 = *piVar5;
        bVar19 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar19);
      *piVar5 = iVar3 + -1;
      DataMemoryBarrier(0xb);
      if (iVar3 == 1) {
        pcVar9 = (char *)(iVar14 + 0x10);
        if (*pcVar9 == '\0') {
          bVar19 = (bool)hasExclusiveAccess(pcVar9);
          if (!bVar19) goto LAB_00da45e4;
          *pcVar9 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00da45e4:
          FUN_01280da8(pcVar9);
        }
        FUN_0128236c(pcVar9);
        *(undefined1 *)(iVar14 + 0x2c) = 1;
        FUN_0072a978(iVar14 + 8,pcVar9);
      }
      piVar5 = (int *)param_1[10];
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar5;
        bVar19 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar19);
      *piVar5 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e454dc(param_1[10]);
      }
      param_1 = param_1 + 0xb;
      FUN_01663cc4(*param_1);
      piVar5 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar5;
        bVar19 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar19);
      *piVar5 = iVar14 + -1;
      goto LAB_00da465c;
    }
    cVar2 = (char)param_1[0x2b];
    bVar19 = cVar2 == '\x03';
    if (bVar19) {
      cVar2 = (char)param_1[0x1c];
    }
    if (bVar19 && cVar2 == '\x03') {
      cVar2 = (char)param_1[0x2a];
      bVar19 = cVar2 == '\x03';
      if (bVar19) {
        cVar2 = (char)param_1[0x29];
      }
      if (bVar19 && cVar2 == '\x03') {
        FUN_0163aa10(param_1 + 0x21);
        if (param_1[0x24] != 0) {
          (**(code **)(param_1[0x24] + 0xc))(param_1[0x25]);
        }
      }
    }
    FUN_0163bdc0(param_1 + 0x2d);
    if (param_1[0x31] != 0) {
      (**(code **)(param_1[0x31] + 0xc))(param_1[0x32]);
    }
    FUN_005e6cdc(param_1 + 0x11);
    if (param_1[0x14] != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 0x11);
    piVar15 = param_1 + 0x10;
    FUN_01663cc4(*piVar15);
    piVar5 = (int *)*piVar15;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar5;
      bVar19 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar19);
    *piVar5 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(piVar15);
    }
    iVar14 = param_1[0xf];
    DataMemoryBarrier(0xb);
    piVar5 = (int *)(iVar14 + 0x44);
    do {
      iVar3 = *piVar5;
      bVar19 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar19);
    *piVar5 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      pcVar9 = (char *)(iVar14 + 0x10);
      if (*pcVar9 == '\0') {
        bVar19 = (bool)hasExclusiveAccess(pcVar9);
        if (!bVar19) goto LAB_00da4684;
        *pcVar9 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00da4684:
        FUN_01280da8(pcVar9);
      }
      FUN_0128236c(pcVar9);
      *(undefined1 *)(iVar14 + 0x2c) = 1;
      FUN_0072a978(iVar14 + 8,pcVar9);
    }
    piVar5 = (int *)param_1[0xf];
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar5;
      bVar19 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar19);
    *piVar5 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e454dc(param_1[0xf]);
    }
    if (param_1[0xc] == 0) {
      return;
    }
    puVar13 = (undefined4 *)param_1[0xd];
LAB_014b47f4:
    if (puVar13 == (undefined4 *)0x0) {
      return;
    }
    iVar14 = FUN_016d3bc8();
    uVar17 = *(byte *)((int)puVar13 + -3) & 0x1f;
    if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
       (uVar10 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar3 = uVar10 - 0x10, uVar10 == 0)) {
      iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) <<
              4;
    }
    uVar10 = (uint)(*(byte *)((int)puVar13 + -3) >> 5);
    iVar16 = *(int *)(iVar14 + 8) + 0x10;
    iVar11 = iVar3 * uVar17 + iVar3 + -4;
    iVar3 = iVar16 + iVar11;
    if (4 < uVar10) {
      if (uVar10 != 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar4)();
      }
      uVar10 = *(uint *)(iVar3 + -4);
      if (uVar10 < 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar4)();
      }
      if (*(char *)(iVar3 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar4)();
      }
    }
    if ((uint)(iVar3 - (int)puVar13) < uVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar4)();
    }
    if (*(char *)(iVar3 - uVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar4)();
    }
    if (*(char *)(iVar16 + iVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar4)();
    }
    bVar1 = *(byte *)(iVar14 + 0x14);
    uVar10 = 1 << uVar17;
    *(undefined1 *)((int)puVar13 + -3) = 0xff;
    *(undefined2 *)((int)puVar13 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar14 + 0x10);
      uVar6 = *(uint *)(iVar14 + 0xc) | uVar12;
      if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar4)();
      }
      if ((uVar12 == 0) || (uVar6 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar14,uVar17);
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
        *(uint *)(iVar14 + 0x10) = uVar10 + uVar12;
        return;
      }
      puVar18 = (uint *)(iVar14 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar18);
        uVar6 = *puVar18;
        if (uVar12 != uVar6) goto LAB_016d409c;
        bVar19 = (bool)hasExclusiveAccess(puVar18);
      } while (!bVar19);
      *puVar18 = uVar10 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar6) {
        return;
      }
    } while( true );
  }
  if ((char)param_1[0x38] != '\0') {
    return;
  }
  if (param_1[2] != 0) {
    thunk_FUN_016d3fb4(param_1[3]);
  }
  iVar14 = param_1[5];
  DataMemoryBarrier(0xb);
  piVar5 = (int *)(iVar14 + 0x44);
  do {
    iVar3 = *piVar5;
    bVar19 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar19);
  *piVar5 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    pcVar9 = (char *)(iVar14 + 0x10);
    if (*pcVar9 == '\0') {
      bVar19 = (bool)hasExclusiveAccess(pcVar9);
      if (!bVar19) goto LAB_00da4518;
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00da4518:
      FUN_01280da8(pcVar9);
    }
    FUN_0128236c(pcVar9);
    *(undefined1 *)(iVar14 + 0x2c) = 1;
    FUN_0072a978(iVar14 + 8,pcVar9);
  }
  piVar5 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar5;
    bVar19 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar19);
  *piVar5 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e454dc(param_1[5]);
  }
  param_1 = param_1 + 6;
  FUN_01663cc4(*param_1);
  piVar5 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar5;
    bVar19 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar19);
  *piVar5 = iVar14 + -1;
LAB_00da465c:
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1);
    return;
  }
  return;
}

