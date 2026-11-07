// FUN_010566e8 @ 010566e8 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_010566e8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0105439c();
  piVar2 = *(int **)(param_1 + 0xe8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01059b88(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
    return;
  }
  return;
}

