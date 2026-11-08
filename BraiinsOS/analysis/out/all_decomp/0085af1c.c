// FUN_0085af1c @ 0085af1c size=960 calls_out=14 calls_in=1
// strings: 

void FUN_0085af1c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint local_20 [4];
  
  if (*(char *)(param_1 + 0x38b0) != '\0') {
    if (*(char *)(param_1 + 0x38b0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x387c) == '\x03') {
      FUN_007da17c(param_1 + 0x3840);
      *(undefined1 *)(param_1 + 0x387d) = 0;
    }
    else if ((*(char *)(param_1 + 0x387c) == '\0') && (*(int *)(param_1 + 0x3830) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3834));
    }
    piVar4 = *(int **)(param_1 + 0x38a8);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*(undefined4 *)(param_1 + 0x38a8));
    }
    piVar4 = *(int **)(param_1 + 0x38a4);
    *(undefined1 *)(param_1 + 0x38b1) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x38a4));
    }
    FUN_016dea68(*(undefined4 *)(param_1 + 0x38a0));
    piVar4 = *(int **)(param_1 + 0x3898);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*(undefined4 *)(param_1 + 0x3898));
    }
    piVar4 = *(int **)(param_1 + 0x389c);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0127c778(*(undefined4 *)(param_1 + 0x389c));
    }
    *(undefined1 *)(param_1 + 0x38b2) = 0;
    FUN_016dea68(*(undefined4 *)(param_1 + 0x3894));
    piVar4 = *(int **)(param_1 + 0x388c);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*(undefined4 *)(param_1 + 0x388c));
    }
    piVar4 = *(int **)(param_1 + 0x3890);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0127c778(*(undefined4 *)(param_1 + 0x3890));
    }
    *(undefined1 *)(param_1 + 0x38b3) = 0;
    FUN_016dea68(*(undefined4 *)(param_1 + 0x3888));
    piVar4 = *(int **)(param_1 + 0x3880);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*(undefined4 *)(param_1 + 0x3880));
    }
    piVar4 = *(int **)(param_1 + 0x3884);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0127c778(*(undefined4 *)(param_1 + 0x3884));
    }
    *(undefined4 *)(param_1 + 0x38b4) = 0;
    *(undefined2 *)(param_1 + 0x38b8) = 0;
    return;
  }
  FUN_007c4ed0(param_1 + 0x1aa8);
  FUN_00861a20(param_1);
  FUN_008579f0(param_1 + 0x1bc8);
  piVar4 = (int *)(param_1 + 0x1c14);
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
          if (*(int *)(*piVar4 + 0x10) == 0) goto LAB_0085783c;
          FUN_016da3a8();
        }
      } while ((local_20[0] & 1) != 0);
LAB_0085783c:
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
  piVar4 = *(int **)(param_1 + 0x1c08);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x1c08));
  }
  piVar4 = *(int **)(param_1 + 0x1c0c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*(undefined4 *)(param_1 + 0x1c0c));
    return;
  }
  return;
}

