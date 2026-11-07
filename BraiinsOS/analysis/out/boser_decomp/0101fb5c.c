// FUN_0101fb5c @ 0101fb5c size=64 calls_out=2 calls_in=1
// strings: 

void FUN_0101fb5c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_009ce6cc();
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a955b8(*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

