// FUN_007773d8 @ 007773d8 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_007773d8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a9cc(*(undefined4 *)(param_1 + 0x40));
  }
  FUN_01872408(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  piVar2 = *(int **)(param_1 + 0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a868(*(undefined4 *)(param_1 + 0x44));
    return;
  }
  return;
}

