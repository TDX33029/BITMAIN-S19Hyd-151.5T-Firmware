// FUN_011a108c @ 011a108c size=124 calls_out=4 calls_in=0
// strings: 

void FUN_011a108c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_01164f34();
  iVar5 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x28) + 1;
  iVar3 = iVar5;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_01157e90(iVar3);
    iVar3 = iVar3 + 0x18;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}

