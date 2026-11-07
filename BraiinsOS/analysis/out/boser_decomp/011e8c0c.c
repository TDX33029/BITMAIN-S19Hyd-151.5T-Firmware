// FUN_011e8c0c @ 011e8c0c size=92 calls_out=4 calls_in=3
// strings: 

void FUN_011e8c0c(int param_1)

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
    FUN_019da640(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_011e87ac(param_1 + 0x28);
  FUN_014b1410(param_1 + 0xa0);
  thunk_FUN_01be4678(param_1);
  return;
}

