// FUN_016a67e4 @ 016a67e4 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_016a67e4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_016a6c8c();
  piVar2 = *(int **)(param_1 + 400);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016b9834(*(undefined4 *)(param_1 + 400));
    return;
  }
  return;
}

