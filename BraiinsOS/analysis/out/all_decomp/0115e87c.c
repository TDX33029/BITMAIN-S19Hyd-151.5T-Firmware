// FUN_0115e87c @ 0115e87c size=284 calls_out=4 calls_in=6
// strings: 

void FUN_0115e87c(uint *param_1)

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
      FUN_0135c7a8(param_1[1],param_1[2]);
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
    FUN_0115cb7c(param_1);
    goto LAB_0115e99c;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*puVar3,puVar3[1]);
    FUN_0115ccf0(param_1 + 0x14);
    return;
  }
LAB_0115e99c:
  FUN_0115ccf0(param_1 + 0x14);
  return;
}

