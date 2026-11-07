// FUN_00d4f424 @ 00d4f424 size=220 calls_out=4 calls_in=1
// strings: 

void FUN_00d4f424(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_00e7bac4();
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar3 = *param_1;
  puVar5 = (undefined4 *)(iVar3 + 8);
  FUN_00e7c674(puVar5);
  if (*(int *)(iVar3 + 0xc) != 0) {
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(undefined4 *)(iVar3 + 0x10));
  }
  piVar2 = (int *)*puVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011782d0(*puVar5);
  }
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

