// FUN_010ea1e8 @ 010ea1e8 size=172 calls_out=3 calls_in=2
// strings: 

void FUN_010ea1e8(undefined4 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  
  FUN_005f3204();
  piVar4 = param_2 + 0x2a;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    puVar3 = (uint *)(param_2 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *puVar3 | 1;
    iVar2 = 8;
    do {
      FUN_019e03e8((int)param_2 + iVar2);
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != 0x88);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_006876c0(param_2);
    return;
  }
  return;
}

