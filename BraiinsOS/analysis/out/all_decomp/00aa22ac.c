// FUN_00aa22ac @ 00aa22ac size=356 calls_out=3 calls_in=3
// strings: 

void FUN_00aa22ac(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
  }
  iVar5 = *(int *)(param_1 + 0x94);
  if (iVar5 != 0) {
    iVar6 = *(int *)(param_1 + 0x90);
    iVar7 = 0;
    do {
      puVar2 = (undefined4 *)(iVar6 + iVar7 * 8);
      piVar3 = (int *)*puVar2;
      iVar7 = iVar7 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(*puVar2,puVar2[1]);
      }
    } while (iVar7 != iVar5);
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x90));
  }
  FUN_00ffdf18(param_1);
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9c));
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0x20) == 1) {
    piVar3 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
      return;
    }
  }
  return;
}

