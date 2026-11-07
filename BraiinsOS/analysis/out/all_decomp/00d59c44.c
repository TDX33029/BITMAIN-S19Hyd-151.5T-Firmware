// FUN_00d59c44 @ 00d59c44 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_00d59c44(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(uint *)(param_1 + 0x68) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
  }
  piVar3 = *(int **)(param_1 + 0x78);
  FUN_00d3e7a4(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04b1c(*(undefined4 *)(param_1 + 0x78));
    return;
  }
  return;
}

