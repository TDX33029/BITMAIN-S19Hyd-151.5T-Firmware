// FUN_00a93878 @ 00a93878 size=64 calls_out=2 calls_in=4
// strings: 

void FUN_00a93878(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0070888c();
  piVar2 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00711b94(*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

