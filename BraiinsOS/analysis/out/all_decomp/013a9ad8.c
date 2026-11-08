// FUN_013a9ad8 @ 013a9ad8 size=128 calls_out=3 calls_in=2
// strings: 

void FUN_013a9ad8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_005ffdec(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_005fdc4c(param_1);
  piVar2 = *(int **)(param_1 + 0x1c);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

