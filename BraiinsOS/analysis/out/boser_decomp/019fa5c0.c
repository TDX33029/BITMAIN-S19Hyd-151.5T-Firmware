// FUN_019fa5c0 @ 019fa5c0 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_019fa5c0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_005f37c4();
  piVar2 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

