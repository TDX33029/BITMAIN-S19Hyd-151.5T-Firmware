// FUN_00d3259c @ 00d3259c size=100 calls_out=1 calls_in=2
// strings: 

void FUN_00d3259c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  piVar2 = piVar5 + 0x11;
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_009d3da8(piVar5 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar4 = *param_1;
  if (*(int *)(iVar4 + 0x34) != -0x80000000) {
    FUN_009d42c4();
  }
  FUN_009d4300(iVar4 + 0x10);
  FUN_009d42c4(iVar4 + 0x20);
  if (iVar4 == -1) {
    return;
  }
  piVar2 = (int *)(iVar4 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar4);
    return;
  }
  return;
}

