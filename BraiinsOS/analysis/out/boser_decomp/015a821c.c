// FUN_015a821c @ 015a821c size=100 calls_out=1 calls_in=2
// strings: 

void FUN_015a821c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  piVar2 = piVar5 + 0x11;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_015eb1bc(piVar5 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar3 = *param_1;
  if (*(int *)(iVar3 + 0x34) != -0x80000000) {
    FUN_015f9ae0();
  }
  FUN_015f9b90(iVar3 + 0x10);
  FUN_015f9ae0(iVar3 + 0x20);
  if (iVar3 == -1) {
    return;
  }
  piVar2 = (int *)(iVar3 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar3);
    return;
  }
  return;
}

