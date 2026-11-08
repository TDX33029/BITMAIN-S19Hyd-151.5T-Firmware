// FUN_007205d4 @ 007205d4 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_007205d4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x118);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0071ce80();
  }
  FUN_00720558(param_1);
  return;
}

