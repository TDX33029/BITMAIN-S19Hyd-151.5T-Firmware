// FUN_006487d8 @ 006487d8 size=1132 calls_out=7 calls_in=3
// strings: 

void FUN_006487d8(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\0') {
    piVar5 = *(int **)(param_1 + 0x50);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar5;
      bVar18 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar18);
    *piVar5 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f9f4(*(undefined4 *)(param_1 + 0x50));
    }
    goto LAB_00648bc8;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    iVar10 = 0xd0;
    switch(*(undefined1 *)(param_1 + 400)) {
    case 0:
      goto switchD_00648814_caseD_0;
    default:
      goto switchD_00648814_caseD_1;
    case 3:
      cVar1 = *(char *)(param_1 + 0x1e4);
      bVar18 = cVar1 != '\x03';
      if (!bVar18) {
        cVar1 = *(char *)(param_1 + 0x1e1);
      }
      if (bVar18 || cVar1 != '\x03') goto LAB_00648ad4;
      if (*(char *)(param_1 + 0x1d4) == '\x03') {
        piVar5 = *(int **)(param_1 + 0x1d0);
        if (*piVar5 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar18 = (bool)hasExclusiveAccess(piVar5);
          if (bVar18) {
            *piVar5 = 0x84;
            goto LAB_00648c40;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar5[2] + 0x10))();
      }
      else if ((*(char *)(param_1 + 0x1d4) == '\0') && (*(int *)(param_1 + 0x1b4) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1b8));
      }
LAB_00648c40:
      *(undefined1 *)(param_1 + 0x1e0) = 0;
      iVar10 = 0x80;
      if (*(int *)(param_1 + 0x180) == 0) goto switchD_00648814_caseD_0;
      goto LAB_00648ae4;
    case 4:
      goto switchD_00648814_caseD_4;
    case 5:
      goto switchD_00648814_caseD_5;
    }
  }
  if (*(char *)(param_1 + 0x98) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x94);
    bVar18 = cVar1 == '\x03';
    if (bVar18) {
      cVar1 = *(char *)(param_1 + 0x70);
    }
    if (bVar18 && cVar1 == '\x04') {
      FUN_0163c790(param_1 + 0x74);
      if (*(int *)(param_1 + 0x78) != 0) {
        (**(code **)(*(int *)(param_1 + 0x78) + 0xc))(*(undefined4 *)(param_1 + 0x7c));
      }
    }
  }
  goto LAB_00648b8c;
switchD_00648814_caseD_5:
  cVar1 = *(char *)(param_1 + 0x1a4);
  if (cVar1 == '\x05') {
    if (*(char *)(param_1 + 0x1b0) == '\x03') {
      piVar5 = *(int **)(param_1 + 0x1ac);
      if (*piVar5 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar18 = (bool)hasExclusiveAccess(piVar5);
        if (bVar18) {
          *piVar5 = 0x84;
          goto LAB_006489ec;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar5[2] + 0x10))();
    }
    else if (*(char *)(param_1 + 0x1b0) == '\0') {
      piVar5 = *(int **)(param_1 + 0x1a8);
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar5;
        bVar18 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar18);
      *piVar5 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016592f4(*(undefined4 *)(param_1 + 0x1a8));
      }
    }
  }
  else if (cVar1 != '\x04') {
    bVar18 = cVar1 == '\x03';
    if (bVar18) {
      cVar1 = *(char *)(param_1 + 0x1e0);
    }
    if (bVar18 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1dc);
      bVar18 = cVar1 == '\x03';
      if (bVar18) {
        cVar1 = *(char *)(param_1 + 0x1b8);
      }
      if (bVar18 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x1bc);
        if (*(int *)(param_1 + 0x1c0) != 0) {
          (**(code **)(*(int *)(param_1 + 0x1c0) + 0xc))(*(undefined4 *)(param_1 + 0x1c4));
        }
      }
    }
    goto switchD_00648814_caseD_4;
  }
LAB_006489ec:
  pcVar11 = *(char **)(param_1 + 0x1a0);
  if (*pcVar11 == '\0') {
    bVar18 = (bool)hasExclusiveAccess(pcVar11);
    if (!bVar18) goto LAB_00648a14;
    *pcVar11 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00648a14:
    FUN_01280da8(pcVar11);
  }
  FUN_0128236c(pcVar11);
  FUN_0163af68(pcVar11,1,pcVar11);
switchD_00648814_caseD_4:
  piVar5 = *(int **)(param_1 + 0xdc);
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *piVar5;
    bVar18 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar18);
  *piVar5 = iVar10 + -1;
  if (iVar10 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016592f4(*(undefined4 *)(param_1 + 0xdc));
  }
  iVar10 = *(int *)(param_1 + 0xb8);
  if (iVar10 == -0x80000000) {
LAB_00648ad4:
    iVar4 = *(int *)(param_1 + 0x180);
  }
  else {
    if (iVar10 == -0x7fffffff) {
      piVar5 = *(int **)(param_1 + 0xbc);
      if (*piVar5 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar18 = (bool)hasExclusiveAccess(piVar5);
        if (bVar18) {
          *piVar5 = 0x84;
          goto LAB_00648ad4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar5[2] + 0x10))();
      goto LAB_00648ad4;
    }
    if (iVar10 == 0) goto LAB_00648ad4;
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
    iVar4 = *(int *)(param_1 + 0x180);
  }
  iVar10 = 0x80;
  if (iVar4 != 0) {
LAB_00648ae4:
    iVar10 = 0x80;
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x184));
  }
switchD_00648814_caseD_0:
  iVar10 = param_1 + 0x60 + iVar10;
  if (*(int *)(iVar10 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar10 + 0x24));
  }
  if (*(int *)(iVar10 + 0x2c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar10 + 0x30));
  }
  if (*(int *)(iVar10 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar10 + 0x3c));
  }
  if (*(int *)(iVar10 + 0x44) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar10 + 0x48));
  }
switchD_00648814_caseD_1:
  pcVar11 = *(char **)(param_1 + 0x54);
  if (*pcVar11 == '\0') {
    bVar18 = (bool)hasExclusiveAccess(pcVar11);
    if (!bVar18) goto LAB_00648b6c;
    *pcVar11 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00648b6c:
    FUN_01280da8(pcVar11);
  }
  FUN_0128236c(pcVar11);
  FUN_0163af68(pcVar11,1,pcVar11);
LAB_00648b8c:
  piVar5 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *piVar5;
    bVar18 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar18);
  *piVar5 = iVar10 + -1;
  if (iVar10 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f9f4(*(undefined4 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x59) == '\0') {
    return;
  }
LAB_00648bc8:
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  iVar10 = *(int *)(param_1 + 0x48);
  if (iVar10 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar10 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar12 - 0x10, uVar12 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar10 + -3) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar13 = iVar7 * uVar16 + iVar7 + -4;
  iVar7 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar7 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar7 - iVar10) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar7 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar12 = 1 << uVar16;
  *(undefined1 *)(iVar10 + -3) = 0xff;
  *(undefined2 *)(iVar10 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar14;
    if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar8 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar14 != uVar8) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar8) {
      return;
    }
  } while( true );
}

