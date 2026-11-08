// FUN_006b85d8 @ 006b85d8 size=728 calls_out=8 calls_in=2
// strings: 

void FUN_006b85d8(int param_1)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x68c);
  if (cVar1 == '\0') {
    iVar12 = *(int *)(param_1 + 0x678) + 1;
    iVar5 = *(int *)(param_1 + 0x674);
    while (iVar12 = iVar12 + -1, iVar12 != 0) {
      FUN_007b5d4c(iVar5);
      iVar5 = iVar5 + 0xf0;
    }
    if (*(int *)(param_1 + 0x670) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x674));
    }
    FUN_006a7ac0(param_1 + 0x80);
    sVar2 = *(short *)(param_1 + 0xe8);
    if (sVar2 != 2) {
      iVar5 = 0;
      if (sVar2 != 0) {
        iVar5 = *(int *)(param_1 + 0xec);
      }
      if (sVar2 != 0 && iVar5 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
      }
      bVar18 = *(short *)(param_1 + 0x10c) != 0;
      iVar5 = 0;
      if (bVar18) {
        iVar5 = *(int *)(param_1 + 0x110);
      }
      if (bVar18 && iVar5 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x114));
      }
    }
    piVar4 = *(int **)(param_1 + 0x5c);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar18 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar18);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01089b40(*(undefined4 *)(param_1 + 0x5c));
    }
    if ((*(uint *)(param_1 + 0x50) & 0x7fffffff) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x54);
  }
  else {
    if (cVar1 == '\x03') {
      puVar14 = *(undefined4 **)(param_1 + 0x694);
      uVar15 = *(undefined4 *)(param_1 + 0x690);
      pcVar6 = (code *)*puVar14;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar15);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar15);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      puVar14 = (undefined4 *)(param_1 + 0x690);
      FUN_00783e64(puVar14);
      piVar4 = (int *)*puVar14;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar18 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar18);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790f30(*puVar14);
      }
    }
    if (*(char *)(param_1 + 0x68d) != '\0') {
      FUN_006b8a80(param_1 + 0x480);
    }
    *(undefined1 *)(param_1 + 0x68d) = 0;
    if (*(char *)(param_1 + 0x68e) != '\0') {
      FUN_006a7ac0(param_1 + 0x698);
      sVar2 = *(short *)(param_1 + 0x700);
      if (sVar2 != 2) {
        iVar5 = 0;
        if (sVar2 != 0) {
          iVar5 = *(int *)(param_1 + 0x704);
        }
        if (sVar2 != 0 && iVar5 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x708));
        }
        bVar18 = *(short *)(param_1 + 0x724) != 0;
        iVar5 = 0;
        if (bVar18) {
          iVar5 = *(int *)(param_1 + 0x728);
        }
        if (bVar18 && iVar5 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x72c));
        }
      }
    }
    *(undefined1 *)(param_1 + 0x68e) = 0;
    FUN_006b8a80(param_1 + 0x290);
    FUN_006a6e14(param_1 + 0x688);
    piVar4 = *(int **)(param_1 + 0x25c);
    *(undefined1 *)(param_1 + 0x68f) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar18 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar18);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01089b40(*(undefined4 *)(param_1 + 0x25c));
    }
    if ((*(uint *)(param_1 + 0x250) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x254));
    }
    FUN_006a7ac0(param_1 + 0x140);
    sVar2 = *(short *)(param_1 + 0x1a8);
    if (sVar2 != 2) {
      iVar5 = 0;
      if (sVar2 != 0) {
        iVar5 = *(int *)(param_1 + 0x1ac);
      }
      if (sVar2 != 0 && iVar5 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1b0));
      }
      bVar18 = *(short *)(param_1 + 0x1cc) != 0;
      iVar5 = 0;
      if (bVar18) {
        iVar5 = *(int *)(param_1 + 0x1d0);
      }
      if (bVar18 && iVar5 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1d4));
      }
    }
    iVar12 = *(int *)(param_1 + 0x684) + 1;
    iVar5 = *(int *)(param_1 + 0x680);
    while (iVar12 = iVar12 + -1, iVar12 != 0) {
      FUN_007b5d4c(iVar5);
      iVar5 = iVar5 + 0xf0;
    }
    if (*(int *)(param_1 + 0x67c) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x680);
  }
  if (iVar5 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar13 = *(int *)(iVar12 + 8) + 0x10;
  iVar10 = iVar7 * uVar16 + iVar7 + -4;
  iVar7 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar9 = *(uint *)(iVar7 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar7 - iVar5) < uVar9) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar3 = *(byte *)(iVar12 + 0x14);
  uVar9 = 1 << uVar16;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar12 + 0x10);
    uVar8 = *(uint *)(iVar12 + 0xc) | uVar11;
    if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar15 = *puVar14;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar14 = uVar15;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar17 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

