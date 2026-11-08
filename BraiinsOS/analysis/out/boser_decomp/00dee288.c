// FUN_00dee288 @ 00dee288 size=160 calls_out=2 calls_in=0
// strings: 

void FUN_00dee288(int *param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = param_1 + 0x2e;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    puVar2 = (uint *)(param_1 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1;
    iVar3 = 8;
    do {
      FUN_019e03e8((int)param_1 + iVar3);
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != 0x88);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1);
  }
  piVar4 = param_2 + 0x2a;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    puVar2 = (uint *)(param_2 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1;
    iVar3 = 8;
    do {
      FUN_019e03e8((int)param_2 + iVar3);
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != 0x88);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_006876c0(param_2);
    return;
  }
  return;
}

