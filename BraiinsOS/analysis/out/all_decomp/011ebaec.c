// FUN_011ebaec @ 011ebaec size=112 calls_out=2 calls_in=0
// strings: 

void FUN_011ebaec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_011e4f30();
  piVar2 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

