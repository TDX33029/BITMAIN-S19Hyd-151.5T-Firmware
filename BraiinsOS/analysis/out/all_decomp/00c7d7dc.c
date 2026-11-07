// FUN_00c7d7dc @ 00c7d7dc size=188 calls_out=3 calls_in=0
// strings: 

void FUN_00c7d7dc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_00c7df30(param_1 + 0x140);
  if (*(int *)(param_1 + 0x130) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x134));
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
  }
  if ((*(uint *)(param_1 + 0x20) & 0x7fffffff) == 0) {
    iVar2 = *(int *)(param_1 + 0x120);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    iVar2 = *(int *)(param_1 + 0x120);
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x124));
  }
  piVar3 = *(int **)(param_1 + 0x300);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d030dc(*(undefined4 *)(param_1 + 0x300));
    return;
  }
  return;
}

