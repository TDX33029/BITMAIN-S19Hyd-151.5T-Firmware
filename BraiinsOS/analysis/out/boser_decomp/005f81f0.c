// FUN_005f81f0 @ 005f81f0 size=64 calls_out=2 calls_in=3
// strings: 

void FUN_005f81f0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_005f7a4c();
  piVar2 = *(int **)(param_1 + 0x188);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a967c0(*(undefined4 *)(param_1 + 0x188));
    return;
  }
  return;
}

