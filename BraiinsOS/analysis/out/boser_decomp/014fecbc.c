// FUN_014fecbc @ 014fecbc size=276 calls_out=4 calls_in=1
// strings: 

void FUN_014fecbc(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  
  iVar2 = 4;
  if (2 < *param_1) {
    iVar2 = *param_1 - 3;
  }
  switch(iVar2) {
  case 0:
    puVar3 = param_1 + 1;
    piVar4 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    break;
  case 1:
    puVar3 = param_1 + 1;
    piVar4 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    break;
  case 2:
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0167a290(param_1[1],param_1[2]);
    }
    puVar3 = param_1 + 3;
    piVar4 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    break;
  case 3:
    puVar3 = param_1 + 1;
    piVar4 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    break;
  default:
    FUN_014fdf6c(param_1);
    goto LAB_014fedd4;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*puVar3,puVar3[1]);
  }
LAB_014fedd4:
  FUN_014fdb74(param_1 + 0x14);
  return;
}

