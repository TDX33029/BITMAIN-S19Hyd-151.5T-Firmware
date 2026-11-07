// FUN_008655d0 @ 008655d0 size=564 calls_out=7 calls_in=1
// strings: 

void FUN_008655d0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint auStack_20 [4];
  
  if (*(char *)(param_1 + 0x38d0) != '\0') {
    if (*(char *)(param_1 + 0x38d0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x389c) == '\x03') {
      FUN_007da17c(param_1 + 0x3860);
      *(undefined1 *)(param_1 + 0x389d) = 0;
    }
    else if ((*(char *)(param_1 + 0x389c) == '\0') && (*(int *)(param_1 + 0x3850) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3854));
    }
    piVar4 = *(int **)(param_1 + 0x38c8);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*(undefined4 *)(param_1 + 0x38c8));
    }
    piVar4 = *(int **)(param_1 + 0x38c4);
    *(undefined1 *)(param_1 + 0x38d1) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x38c4));
    }
    FUN_016dea68(*(undefined4 *)(param_1 + 0x38c0));
    piVar4 = *(int **)(param_1 + 0x38b8);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*(undefined4 *)(param_1 + 0x38b8));
    }
    piVar4 = *(int **)(param_1 + 0x38bc);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0127c778(*(undefined4 *)(param_1 + 0x38bc));
    }
    *(undefined1 *)(param_1 + 0x38d2) = 0;
    FUN_016dea68(*(undefined4 *)(param_1 + 0x38b4));
    piVar4 = *(int **)(param_1 + 0x38ac);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*(undefined4 *)(param_1 + 0x38ac));
    }
    piVar4 = *(int **)(param_1 + 0x38b0);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0127c778(*(undefined4 *)(param_1 + 0x38b0));
    }
    *(undefined1 *)(param_1 + 0x38d3) = 0;
    FUN_016dea68(*(undefined4 *)(param_1 + 0x38a8));
    piVar4 = *(int **)(param_1 + 0x38a0);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*(undefined4 *)(param_1 + 0x38a0));
    }
    piVar4 = *(int **)(param_1 + 0x38a4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0127c778(*(undefined4 *)(param_1 + 0x38a4));
    }
    *(undefined4 *)(param_1 + 0x38d4) = 0;
    *(undefined2 *)(param_1 + 0x38d8) = 0;
    return;
  }
  FUN_007c4ed0(param_1 + 0x1aa8);
  FUN_00861a20(param_1);
  FUN_00861e18(param_1 + 0x1bc8);
  piVar4 = (int *)(param_1 + 0x1c24);
  iVar5 = *piVar4;
  if (iVar5 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar5 + 0x10) < 0) {
      puVar2 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar5 = *piVar4;
    }
    else {
      iVar5 = *piVar4;
    }
    if (iVar5 != 0) {
      do {
        while (FUN_008b55d8(auStack_20,piVar4), auStack_20[0] == 2) {
          if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*piVar4 + 0x10) == 0) goto LAB_0086186c;
          FUN_016da3a8();
        }
      } while ((auStack_20[0] & 1) != 0);
LAB_0086186c:
      piVar3 = (int *)*piVar4;
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089e44c(*piVar4);
        }
      }
    }
  }
  piVar4 = *(int **)(param_1 + 0x1c18);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x1c18));
  }
  piVar4 = *(int **)(param_1 + 0x1c1c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*(undefined4 *)(param_1 + 0x1c1c));
    return;
  }
  return;
}

