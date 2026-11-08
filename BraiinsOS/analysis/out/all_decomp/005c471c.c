// FUN_005c471c @ 005c471c size=156 calls_out=4 calls_in=10
// strings: 

void FUN_005c471c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  piVar4 = piVar3 + 0x31;
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    FUN_0163b708(piVar3 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac4f8(*param_1);
  }
  piVar4 = (int *)param_1[2];
  FUN_00ee0fc4(piVar4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(param_1[2]);
    return;
  }
  return;
}

