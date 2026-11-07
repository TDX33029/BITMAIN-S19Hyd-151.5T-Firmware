// FUN_013f92c0 @ 013f92c0 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_013f92c0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_013f9340();
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a7ac(*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}

