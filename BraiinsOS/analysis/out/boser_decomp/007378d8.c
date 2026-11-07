// FUN_007378d8 @ 007378d8 size=92 calls_out=4 calls_in=3
// strings: 

void FUN_007378d8(int param_1)

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
    FUN_019da4fc(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_00737600(param_1 + 0x28);
  FUN_014b1410(param_1 + 0x2e0);
  thunk_FUN_01be4678(param_1);
  return;
}

