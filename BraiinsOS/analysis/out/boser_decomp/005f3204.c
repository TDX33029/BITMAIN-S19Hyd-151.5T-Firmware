// FUN_005f3204 @ 005f3204 size=148 calls_out=2 calls_in=2
// strings: 

void FUN_005f3204(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  
  piVar4 = param_1 + 0x2e;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    puVar3 = (uint *)(param_1 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *puVar3 | 1;
    iVar2 = 8;
    do {
      FUN_019e03e8((int)param_1 + iVar2);
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != 0x88);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1);
    return;
  }
  return;
}

