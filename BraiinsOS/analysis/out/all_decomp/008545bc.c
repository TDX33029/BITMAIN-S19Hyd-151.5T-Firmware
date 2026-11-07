// FUN_008545bc @ 008545bc size=964 calls_out=14 calls_in=2
// strings: 

void FUN_008545bc(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint local_20 [4];
  
  if (*(char *)(param_1 + 0x3890) != '\0') {
    if (*(char *)(param_1 + 0x3890) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x385c) == '\x03') {
      FUN_007da17c(param_1 + 0x3820);
      *(undefined1 *)(param_1 + 0x385d) = 0;
    }
    else if ((*(char *)(param_1 + 0x385c) == '\0') && (*(int *)(param_1 + 0x3810) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3814));
    }
    piVar4 = *(int **)(param_1 + 0x3888);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*(undefined4 *)(param_1 + 0x3888));
    }
    piVar4 = *(int **)(param_1 + 0x3884);
    *(undefined1 *)(param_1 + 0x3891) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x3884));
    }
    FUN_016dea68(*(undefined4 *)(param_1 + 0x3880));
    piVar4 = *(int **)(param_1 + 0x3878);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*(undefined4 *)(param_1 + 0x3878));
    }
    piVar4 = *(int **)(param_1 + 0x387c);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0127c778(*(undefined4 *)(param_1 + 0x387c));
    }
    *(undefined1 *)(param_1 + 0x3892) = 0;
    FUN_016dea68(*(undefined4 *)(param_1 + 0x3874));
    piVar4 = *(int **)(param_1 + 0x386c);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*(undefined4 *)(param_1 + 0x386c));
    }
    piVar4 = *(int **)(param_1 + 0x3870);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0127c778(*(undefined4 *)(param_1 + 0x3870));
    }
    *(undefined1 *)(param_1 + 0x3893) = 0;
    FUN_016dea68(*(undefined4 *)(param_1 + 0x3868));
    piVar4 = *(int **)(param_1 + 0x3860);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*(undefined4 *)(param_1 + 0x3860));
    }
    piVar4 = *(int **)(param_1 + 0x3864);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0127c778(*(undefined4 *)(param_1 + 0x3864));
    }
    *(undefined4 *)(param_1 + 0x3894) = 0;
    *(undefined2 *)(param_1 + 0x3898) = 0;
    return;
  }
  FUN_007c4ed0(param_1 + 0x1aa8);
  FUN_00861a20(param_1);
  FUN_0085101c(param_1 + 0x1bc8);
  piVar4 = (int *)(param_1 + 0x1c04);
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
        while (FUN_008b55d8(local_20,piVar4), local_20[0] == 2) {
          if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*piVar4 + 0x10) == 0) goto LAB_00850e68;
          FUN_016da3a8();
        }
      } while ((local_20[0] & 1) != 0);
LAB_00850e68:
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
  piVar4 = *(int **)(param_1 + 0x1bf8);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x1bf8));
  }
  piVar4 = *(int **)(param_1 + 0x1bfc);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*(undefined4 *)(param_1 + 0x1bfc));
    return;
  }
  return;
}

