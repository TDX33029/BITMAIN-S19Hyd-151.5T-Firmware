// FUN_013a9c80 @ 013a9c80 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_013a9c80(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0x38) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x40);
  }
  if (bVar3 && iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
  }
  piVar2 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *piVar2;
    bVar3 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar3);
  *piVar2 = iVar1 + -1;
  if (iVar1 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c0df4(*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}

