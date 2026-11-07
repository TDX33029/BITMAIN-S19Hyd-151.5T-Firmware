// FUN_005f7b2c @ 005f7b2c size=64 calls_out=2 calls_in=2
// strings: 

void FUN_005f7b2c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0193c420();
  piVar2 = *(int **)(param_1 + 0x128);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x128));
    return;
  }
  return;
}

