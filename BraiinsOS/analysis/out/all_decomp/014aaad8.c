// FUN_014aaad8 @ 014aaad8 size=620 calls_out=7 calls_in=1
// strings: 

void FUN_014aaad8(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0x78) == 0x3b9aca01) {
    uVar5 = *(undefined4 *)(param_1 + 0x70);
    puVar6 = *(undefined4 **)(param_1 + 0x74);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x9c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010c353c(*(undefined4 *)(param_1 + 0x9c));
    }
    piVar2 = *(int **)(param_1 + 0xa0);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    }
    piVar2 = *(int **)(param_1 + 0xa8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_1 + 0xa8));
    }
    piVar2 = *(int **)(param_1 + 0xac);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_1 + 0xac));
    }
    piVar2 = *(int **)(param_1 + 0xb0);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149e51c(*(undefined4 *)(param_1 + 0xb0));
    }
    if (*(char *)(param_1 + 0x98) != '\x02') {
      (**(code **)(*(int *)(param_1 + 0x88) + 0x10))
                (param_1 + 0x94,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
    }
    piVar2 = *(int **)(param_1 + 0x80);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
      }
    }
  }
  piVar2 = *(int **)(param_1 + 0xb8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  }
  piVar2 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  }
  piVar2 = *(int **)(param_1 + 0x68);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    }
  }
  piVar2 = *(int **)(param_1 + 0xe4);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149f9e0(*(undefined4 *)(param_1 + 0xe4));
      return;
    }
  }
  return;
}

