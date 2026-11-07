// FUN_013a8e88 @ 013a8e88 size=72 calls_out=3 calls_in=0
// strings: 

void FUN_013a8e88(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_013a9ad8();
  FUN_013a9a20(param_1 + 0x30);
  piVar2 = *(int **)(param_1 + 400);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c0df4(*(undefined4 *)(param_1 + 400));
    return;
  }
  return;
}

