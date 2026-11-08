// FUN_0155da0c @ 0155da0c size=224 calls_out=5 calls_in=7
// strings: 

void FUN_0155da0c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 8) == 2) {
    piVar2 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    iVar5 = 0x14;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01340158(*(undefined4 *)(param_1 + 0x40));
    }
  }
  else {
    FUN_014fe07c(param_1 + 0x48);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    iVar5 = 0x34;
  }
  puVar4 = (undefined4 *)(param_1 + 8 + iVar5);
  FUN_019bb7e0(*puVar4,puVar4[1]);
  piVar2 = *(int **)(param_1 + 0x54);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0134020c(*(undefined4 *)(param_1 + 0x54));
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

