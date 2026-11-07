// FUN_013536dc @ 013536dc size=68 calls_out=1 calls_in=2
// strings: 

void FUN_013536dc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 8) == 2 || *(int *)(param_1 + 8) == 0) {
    return;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

