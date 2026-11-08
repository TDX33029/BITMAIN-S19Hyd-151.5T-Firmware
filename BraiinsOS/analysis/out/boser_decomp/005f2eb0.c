// FUN_005f2eb0 @ 005f2eb0 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_005f2eb0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_009cd11c();
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a95994(*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

