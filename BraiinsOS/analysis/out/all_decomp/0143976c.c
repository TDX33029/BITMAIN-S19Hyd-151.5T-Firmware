// FUN_0143976c @ 0143976c size=360 calls_out=4 calls_in=2
// strings: 

void FUN_0143976c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    puVar6 = *(undefined4 **)(param_1 + 0x1bc);
    uVar5 = *(undefined4 *)(param_1 + 0x1b8);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    FUN_014333b4(param_1 + 0x1a0);
    piVar2 = *(int **)(param_1 + 0x1a8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    }
    piVar2 = *(int **)(param_1 + 0x180);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x1c8) == '\x03') {
    FUN_01439604(param_1 + 0x70);
    piVar2 = *(int **)(param_1 + 0x198);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
      }
    }
    piVar2 = *(int **)(param_1 + 400);
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194));
    }
    *(undefined1 *)(param_1 + 0x1c5) = 0;
    FUN_014333b4(param_1 + 0x188);
    *(undefined2 *)(param_1 + 0x1c6) = 0;
    return;
  }
  return;
}

