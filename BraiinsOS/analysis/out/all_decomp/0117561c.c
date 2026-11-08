// FUN_0117561c @ 0117561c size=132 calls_out=5 calls_in=0
// strings: 

void FUN_0117561c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_011a4518();
  iVar5 = *(int *)(param_1 + 0x6c);
  iVar4 = *(int *)(param_1 + 0x70) + 1;
  iVar3 = iVar5;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_0115e87c(iVar3);
    iVar3 = iVar3 + 100;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  FUN_011a39dc(param_1 + 0x30);
  piVar2 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    return;
  }
  return;
}

