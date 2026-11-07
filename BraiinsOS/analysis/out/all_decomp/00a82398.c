// FUN_00a82398 @ 00a82398 size=72 calls_out=3 calls_in=0
// strings: 

void FUN_00a82398(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00a80788();
  FUN_00e7decc(param_1 + 0xf0);
  piVar2 = *(int **)(param_1 + 0xf8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0xf8));
    return;
  }
  return;
}

