// FUN_015e1124 @ 015e1124 size=480 calls_out=3 calls_in=3
// strings: 

void FUN_015e1124(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar2 = *(int **)(param_1 + 0x100);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015ced80(*(undefined4 *)(param_1 + 0x100));
  }
  if (*(int *)(param_1 + 0x10) != 0x2f || *(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x70) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
    }
    if (*(int *)(param_1 + 0x88) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c));
    }
    if (*(int *)(param_1 + 0x94) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x98));
    }
  }
  if ((*(int *)(param_1 + 0x118) != 2) && (*(int *)(param_1 + 0x118) == 0)) {
    iVar3 = *(int *)(param_1 + 0x120);
    if (iVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x11c);
      puVar5 = (undefined4 *)(iVar4 + 4);
      do {
        if (puVar5[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar5);
        }
        puVar5 = puVar5 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      thunk_FUN_016d3fb4(iVar4);
    }
    iVar3 = *(int *)(param_1 + 0x128);
    if (iVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x124);
      piVar2 = (int *)(iVar4 + 4);
      do {
        if (*piVar2 != 0) {
          thunk_FUN_016d3fb4(piVar2[-1]);
        }
        piVar2 = piVar2 + 6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  if ((*(int *)(param_1 + 0x130) != 2) && (*(int *)(param_1 + 0x130) == 0)) {
    iVar3 = *(int *)(param_1 + 0x138);
    if (iVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x134);
      piVar2 = (int *)(iVar4 + 8);
      do {
        if (piVar2[-2] == 0) {
          if (*piVar2 != 0) {
            thunk_FUN_016d3fb4(piVar2[-1]);
          }
          if (piVar2[2] != 0) {
            thunk_FUN_016d3fb4(piVar2[1]);
          }
        }
        piVar2 = piVar2 + 10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      thunk_FUN_016d3fb4(iVar4);
    }
    if (*(int *)(param_1 + 0x140) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x13c));
    }
  }
  if (*(char *)(param_1 + 0x148) == 'S') {
    return;
  }
  FUN_015dec6c(*(char *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c));
  return;
}

