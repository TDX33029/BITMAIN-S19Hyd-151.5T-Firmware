// FUN_01056364 @ 01056364 size=612 calls_out=5 calls_in=3
// strings: 

void FUN_01056364(undefined4 *param_1)

{
  ushort uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  short *psVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar12 = (ushort *)*param_1;
  sVar8 = 7;
  uVar1 = *puVar12;
  if (1 < uVar1) {
    sVar8 = uVar1 - 2;
  }
  iVar9 = 4;
  switch(sVar8) {
  case 7:
    iVar9 = 0;
    if (uVar1 != 0) {
      iVar9 = *(int *)(puVar12 + 2);
    }
    if (uVar1 != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(puVar12 + 4));
      uVar1 = puVar12[0x12];
    }
    else {
      uVar1 = puVar12[0x12];
    }
    iVar9 = 0x28;
    if (uVar1 != 0) goto switchD_01056398_caseD_f;
    break;
  case 8:
    uVar5 = *(undefined4 *)(puVar12 + 0xe);
    FUN_01056364();
    thunk_FUN_016d3fb4(uVar5);
    goto LAB_014b47f4;
  case 0xf:
  case 0x16:
  case 0x18:
  case 0x24:
switchD_01056398_caseD_f:
    if (*(int *)((int)puVar12 + iVar9) != 0) {
      thunk_FUN_016d3fb4(((int *)((int)puVar12 + iVar9))[1]);
    }
    break;
  case 0x13:
    psVar13 = *(short **)(puVar12 + 8);
    iVar9 = 0;
    if (*psVar13 != 0) {
      iVar9 = *(int *)(psVar13 + 2);
    }
    if (*psVar13 != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(psVar13 + 4));
    }
    iVar9 = 0;
    if (psVar13[0x12] != 0) {
      iVar9 = *(int *)(psVar13 + 0x14);
    }
    if (psVar13[0x12] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(psVar13 + 0x16));
    }
    thunk_FUN_016d3fb4(psVar13);
    psVar13 = *(short **)(puVar12 + 10);
    if (psVar13 != (short *)0x0) {
      iVar9 = 0;
      if (*psVar13 != 0) {
        iVar9 = *(int *)(psVar13 + 2);
      }
      if (*psVar13 != 0 && iVar9 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar13 + 4));
      }
      iVar9 = 0;
      if (psVar13[0x12] != 0) {
        iVar9 = *(int *)(psVar13 + 0x14);
      }
      if (psVar13[0x12] != 0 && iVar9 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar13 + 0x16));
      }
      iVar9 = 0;
      if (psVar13[0x22] != 0) {
        iVar9 = *(int *)(psVar13 + 0x24);
      }
      if (psVar13[0x22] != 0 && iVar9 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar13 + 0x26));
      }
      iVar9 = 0;
      if (psVar13[0x34] != 0) {
        iVar9 = *(int *)(psVar13 + 0x36);
      }
      if (psVar13[0x34] != 0 && iVar9 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar13 + 0x38));
      }
      iVar9 = 0;
      if (psVar13[0x44] != 0) {
        iVar9 = *(int *)(psVar13 + 0x46);
      }
      if (psVar13[0x44] != 0 && iVar9 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar13 + 0x48));
      }
      iVar9 = 0;
      if (psVar13[0x56] != 0) {
        iVar9 = *(int *)(psVar13 + 0x58);
      }
      if (psVar13[0x56] != 0 && iVar9 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar13 + 0x5a));
      }
      thunk_FUN_016d3fb4(psVar13);
    }
    piVar6 = *(int **)(puVar12 + 0xc);
    if (piVar6 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01059abc(*(undefined4 *)(puVar12 + 0xc),*(undefined4 *)(puVar12 + 0xe));
      }
    }
    piVar6 = *(int **)(puVar12 + 0x10);
    if (piVar6 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01059b88(*(undefined4 *)(puVar12 + 0x10),*(undefined4 *)(puVar12 + 0x12));
      }
    }
    break;
  case 0x1d:
    piVar6 = *(int **)(puVar12 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010599d0(*(undefined4 *)(puVar12 + 2));
    }
  }
LAB_014b47f4:
  if (puVar12 == (ushort *)0x0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar18 = *(byte *)((int)puVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar10 = uVar14 - 0x10, uVar14 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar14 = (uint)(*(byte *)((int)puVar12 + -3) >> 5);
  iVar17 = *(int *)(iVar9 + 8) + 0x10;
  iVar15 = iVar10 * uVar18 + iVar10 + -4;
  iVar10 = iVar17 + iVar15;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar14 = *(uint *)(iVar10 + -4);
    if (uVar14 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar10 - (int)puVar12) < uVar14) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar10 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar17 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar9 + 0x14);
  uVar14 = 1 << uVar18;
  *(undefined1 *)((int)puVar12 + -3) = 0xff;
  puVar12[-1] = 0;
  do {
    uVar16 = *(uint *)(iVar9 + 0x10);
    uVar11 = *(uint *)(iVar9 + 0xc) | uVar16;
    if ((uVar14 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar16 == 0) || (uVar11 + uVar14 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar14 + uVar16;
      return;
    }
    puVar19 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar19);
      uVar11 = *puVar19;
      if (uVar16 != uVar11) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar19);
    } while (!bVar2);
    *puVar19 = uVar14 + uVar16;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar16 == uVar11) {
      return;
    }
  } while( true );
}

