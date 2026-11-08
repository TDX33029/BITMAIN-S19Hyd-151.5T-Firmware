// FUN_016a25b8 @ 016a25b8 size=176 calls_out=2 calls_in=2
// strings: 

void FUN_016a25b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 0x1a8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1ac));
  }
  if (*(int *)(param_1 + 0x168) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x16c));
  }
  if (*(int *)(param_1 + 0x174) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x178));
  }
  if (*(int *)(param_1 + 0x184) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x188));
  }
  if (*(char *)(param_1 + 0x54) == '\x02') {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    return;
  }
  return;
}

