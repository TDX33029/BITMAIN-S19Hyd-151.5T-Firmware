// FUN_00a1eca4 @ 00a1eca4 size=244 calls_out=1 calls_in=0
// strings: 

void FUN_00a1eca4(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = param_1 + 5;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < (uint)param_1[4]) {
      puVar3 = (uint *)(param_1 + 4);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    puVar3 = (uint *)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar2 = param_1[6];
      param_1[6] = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 & 0xfffffffd;
      if (iVar2 != 0) {
        (**(code **)(iVar2 + 4))(param_1[7]);
      }
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00f36f34(param_1);
    return;
  }
  return;
}

